/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_down.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:32:14 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:32:15 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_col_down(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16])
{
	int	max_seen;
	int	col;
	int	count;
	int	index;

	count = 0;
	max_seen = 0;
	col = pos % TAB_SIZE;
	if (pos / TAB_SIZE == TAB_SIZE - 1)
	{
		index = TAB_SIZE - 1;
		while (index > -1)
		{
			if (tab[index][col] > max_seen)
			{
				max_seen = tab[index][col];
				count++;
			}
			index--;
		}
		if (entry[col + 4] != count)
			return (0);
	}
	return (1);
}
