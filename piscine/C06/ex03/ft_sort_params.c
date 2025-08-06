/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:29:27 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/27 18:08:43 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *string1, char *string2)
{
	char	*s1;
	char	*s2;

	s1 = string1;
	s2 = string2;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort(char *string[], int argv)
{
	int		a;
	int		b;
	char	*temp;	

	a = 0;
	while (a < argv)
	{
		b = a + 1;
		while (b < argv)
		{
			if (ft_strcmp(string[a], string[b]) > 0)
			{
				temp = string[b];
				string[b] = string[a];
				string[a] = temp;
			}
			b++;
		}
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	sort(argv, argc);
	index = 1;
	while (index < argc)
	{
		while (*argv[index] != '\0')
		{
			write (1, argv[index], 1);
			++argv[index];
		}
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
