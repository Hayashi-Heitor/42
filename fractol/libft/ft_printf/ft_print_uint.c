/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:19:57 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:21:12 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c);

int	ft_print_uint(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_print_uint(num / 10);
	count += ft_print_char(num % 10 + '0');
	return (count);
}
