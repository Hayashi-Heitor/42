/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:00:21 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/30 20:17:05 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		*count;
	int		count_ret;

	count = malloc(sizeof(int));
	(*count = 0);
	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			ft_args(text, count, args);
		}
		else
		{
			ft_putchar(*text);
			(*count)++;
		}
		text++;
	}
	count_ret = *count;
	free(count);
	va_end(args);
	return (count_ret);
}
