/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bad_inputs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:34:05 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 21:06:42 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"rush01.h"

int	check_bad_inputs(int argc, char *agrv)
{
	if (argc < 2)
		return (1);
	if (my_strlen(agrv) != 31 || is_invalid_input(agrv))
		return (1);
	return (0);
}
