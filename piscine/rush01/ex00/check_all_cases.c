/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_cases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:23:48 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:25:18 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.h"

int	check_all_cases(int tab[TAB_SIZE][TAB_SIZE], int pos, int entry[16])
{
	if (!check_row_left(tab, pos, entry))
		return (0);
	if (!check_row_right(tab, pos, entry))
		return (0);
	if (!check_col_up(tab, pos, entry))
		return (0);
	if (!check_col_down(tab, pos, entry))
		return (0);
	return (1);
}
