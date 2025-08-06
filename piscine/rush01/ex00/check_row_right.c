/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:29:54 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:30:23 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row_right(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16])
{
	int	max_seen;
	int	count;
	int	row;
	int	index;

	max_seen = 0;
	count = 0;
	row = pos / TAB_SIZE;
	if (pos % TAB_SIZE == TAB_SIZE - 1)
	{
		index = TAB_SIZE - 1;
		while (index > -1)
		{
			if (tab[row][index] > max_seen)
			{
				max_seen = tab[row][index];
				count++;
			}
			index--;
		}
		if (entry[row + 12] != count)
			return (0);
	}
	return (1);
}
