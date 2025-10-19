/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:53:29 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/30 19:20:50 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_args(const char *text, int *count, va_list args)
{
	if (*text == 'c')
	{
		ft_args_char(args);
		(*count)++;
	}
	else if (*text == 'd' || *text == 'i')
		ft_args_int(args, count);
	else if (*text == 's')
		ft_args_str(args, count);
	else if (*text == 'x')
		ft_put_hex(va_arg(args, unsigned int), count, 0);
	else if (*text == 'X')
		ft_put_hex(va_arg(args, unsigned int), count, 1);
	else if (*text == 'u')
		ft_args_uns_int(args, count);
	else if (*text == 'p')
		ft_args_ptr(args, count);
	else if (*text == '%')
	{
		write(1, "%", 1);
		(*count)++;
	}
	text++;
}
