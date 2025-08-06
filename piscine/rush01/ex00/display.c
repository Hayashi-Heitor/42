/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:25:55 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:42:13 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	display(int tab[TAB_SIZE][TAB_SIZE])
{
	int	row;
	int	col;

	row = 0;
	while (row < TAB_SIZE)
	{
		col = 0;
		while (col < TAB_SIZE)
		{
			putnumber(tab[row][col]);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
