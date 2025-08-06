#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct type_dict
{
	char *key;
	char *value;
	struct type_dict *next;
} tp_dict;

void putstr(const char *s) 
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	
}

int strcmp(const char *a,const char *b)
{
	while (*a != '\0' && *a == *b) 
	{
		a++;
		b++;
	}
	return *a - *b;
}

tp_dict *parse_dict(char *file)
{
	int		fd = open(file, O_RDONLY);
	int		i;
	char 	line[256];
	char 	c;
	char	*key;
	char	*val;
	tp_dict *dict = 0;
	tp_dict *new;

	if (fd < 0)
		return (0);
	while (read(fd, &c, 1) > 0)
	{
		i = 0;
		while (c != '\n' && i < 255)
		{
			line[i] = c;
			read(fd, &c, 1);
			i++;
		}
		line[i] = '\0';
		*key = line;
		*val = 0;
		i = 0;
		while (line[i])
		{
			if (line[i] == ':')
			{
				line[i] = '\0';
				val = line + i + 1;
				while (*val == ' ' || *val == '\t')
					val++;
				break;
			}
			i++;
		}
		
		if (!val)
			continue;
		
		new = malloc(sizeof(tp_dict));
		(*new).key = key;
		(*new).value = val;
		(*new).next = dict;
		dict = new;
	}
	close(fd);
	return (dict);
}

void print_num(tp_dict *d, char *n)
{
	if (strcmp(n, "0") == 0)
	{
		putstr("zero\n");
		return;
	}
	
	int len = 0;
	while (n[len])
		len++;
	
	int groups = (len + 2) / 3;
	int first = len - (groups - 1) * 3;
	
	for (int i = 0; i < groups; i++)
	{
		char group[4] = {0};
		int start = i * 3;
		if (i == 0 && first != 3)
			start = 0;
		
		for (int j = 0; j < 3; j++)
		{
			if (start + j < len) group[j] = n[start + j];
			else group[j] = '0';
		}
		
		tp_dict *tmp = d;
		while (tmp)
		{
			if (strcmp((*tmp).key, group) == 0)
			{
				putstr((*tmp).value);
				putstr(" ");
				break;
			}
			tmp = (*tmp).next;
		}
	}
	putstr("\n");
}

int main(int argc, char **argv)
{
	char *dict_file;
	tp_dict *dict;

	if (argc < 2 || argc > 3) 
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 3)
		dict_file = argv[1];
	else
		dict_file = "numbers.dict";
	dict = parse_dict(dict_file);
	if (!dict)
	{
		putstr("Dict Error\n");
		return 1;
	}
	
	print_num(dict, argv[argc-1]);
	
	while (dict)
	{
		tp_dict *next = (*dict).next;
		free(dict);
		dict = next;
	}
	return 0;
}
