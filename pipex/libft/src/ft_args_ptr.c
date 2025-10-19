/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:17:18 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/31 20:07:43 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_args_ptr(va_list args, int *count)
{
	unsigned long	num;

	num = va_arg(args, unsigned long);
	if (num)
	{
		write(1, "0x", 2);
		(*count) += 2;
		ft_put_hex(num, count, 0);
	}
	else
	{
		write(1, "(nil)", 5);
		(*count) += 5;
	}
}
