/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_double_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:28:57 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:28:58 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	search_double_number(int tab[TAB_SIZE][TAB_SIZE], int pos, int number)
{
	int	row;
	int	col;
	int	index;

	index = 0;
	row = pos / TAB_SIZE;
	col = pos % TAB_SIZE;
	while (index < TAB_SIZE)
	{
		if (tab[row][index] == number)
		{
			return (1);
		}
		index++;
	}
	index = 0;
	while (index < TAB_SIZE)
	{
		if (tab[index][col] == number)
		{
			return (1);
		}
		index++;
	}
	return (0);
}
