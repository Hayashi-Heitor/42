/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:19:50 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:21:04 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c);

int	ft_print_int(int num)
{
	unsigned int	num_u;
	int				count;

	count = 0;
	num_u = num;
	if (num < 0)
	{
		count += ft_print_char('-');
		num_u = -num;
	}
	if (num_u >= 10)
		count += ft_print_int(num_u / 10);
	count += ft_print_char(num_u % 10 + '0');
	return (count);
}
