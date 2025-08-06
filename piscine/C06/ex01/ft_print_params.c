/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:24:04 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/27 18:09:07 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

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
