/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:24:19 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/15 20:24:20 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *ptr)
{
	long	result;
	int		sign;

	sign = 1;
	result = 0;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (ft_isdigit(*ptr))
	{
		result = result * 10 + (*ptr - '0');
		ptr++;
	}
	if (*ptr)
	{
		if (!ft_isdigit(*ptr))
			return (0);
	}
	return (result * sign);
}
