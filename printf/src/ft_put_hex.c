/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:42:30 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/30 20:29:25 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned long hex, int *count, int upper)
{
	char	*digits;
	char	c;

	if (upper)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (hex >= 16)
		ft_put_hex(hex / 16, count, upper);
	c = digits[hex % 16];
	write(1, &c, 1);
	*count += 1;
}
