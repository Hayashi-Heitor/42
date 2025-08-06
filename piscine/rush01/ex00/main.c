/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:50:45 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:45:56 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char *argv[])
{
	int	entry[16];
	int	tab[TAB_SIZE][TAB_SIZE];

	if (check_bad_inputs(argc, argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	tranfer_string_vector(argv[1], entry);
	fill_martix(tab);
	if (solution(tab, 0, entry) == 1)
		display(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}
