/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tranfer_string_vector.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:41:42 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/23 20:45:04 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	tranfer_string_vector(char *str, int *vector)
{
	*vector = atoi(*str);
	while (*(str + 1) != '\0')
	{
		*vector = atoi(*str);
		str += 2;
		vector++;
	}
	*vector = atoi(*str);
}
