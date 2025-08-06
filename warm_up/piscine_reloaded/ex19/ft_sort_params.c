/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 19:09:47 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/08 13:31:33 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	sort(char *string[], int argc)
{
	int		a;
	int		b;
	char	*temp;	

	a = 0;
	while (a < argc)
	{
		b = a + 1;
		while (b < argc)
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

int	main(int argc, char *argv[])
{
	int	index;

	sort(argv, argc);
	index = 1;
	while (index < argc)
	{
		while (*argv[index] != '\0')
		{
			ft_putchar(*argv[index]);
			++argv[index];
		}
		ft_putchar('\n');
		index++;
	}
	return (0);
}
