/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:29:27 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:29:31 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row_left(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16])
{
	int	max_seen;
	int	row;
	int	count;
	int	index;

	count = 0;
	row = pos / TAB_SIZE;
	max_seen = 0;
	if (pos % TAB_SIZE == TAB_SIZE - 1)
	{
		index = 0;
		while (index < TAB_SIZE)
		{
			if (tab[row][index] > max_seen)
			{
				max_seen = tab[row][index];
				count++;
			}
			index++;
		}
		if (entry[row + 8] != count)
			return (0);
	}
	return (1);
}
