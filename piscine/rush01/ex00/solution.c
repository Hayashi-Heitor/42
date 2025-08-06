/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:25:13 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:25:15 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	solution(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16])
{
	int	size;

	size = 1;
	if (pos == TAB_SIZE * TAB_SIZE)
		return (1);
	while (size <= TAB_SIZE)
	{
		if (search_double_number(tab, pos, size) == 0)
		{
			tab[pos / TAB_SIZE][pos % TAB_SIZE] = size;
			if (check_all_cases(tab, pos, entry) == 1)
			{
				if (solution(tab, pos + 1, entry) == 1)
					return (1);
			}
			tab[pos / TAB_SIZE][pos % TAB_SIZE] = 0;
		}
		size++;
	}
	return (0);
}
