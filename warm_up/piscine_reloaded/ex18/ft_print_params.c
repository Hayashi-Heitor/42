/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:43:00 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/07 17:56:02 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	index;
	int	count;

	count = 1;
	while (count < argc)
	{
		index = 0;
		while (argv[count][index] != '\0')
			ft_putchar(argv[count][index++]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
