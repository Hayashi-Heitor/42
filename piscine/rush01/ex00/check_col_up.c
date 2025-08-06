/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:31:27 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:45:13 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_col_up(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16])
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
		index = 0;
		while (index < TAB_SIZE)
		{
			if (tab[index][col] > max_seen)
			{
				max_seen = tab[index][col];
				count++;
			}
			index++;
		}
		if (entry[col] != count)
			return (0);
	}
	return (1);
}
