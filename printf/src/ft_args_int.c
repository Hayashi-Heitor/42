/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:55:09 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/31 20:04:52 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_args_int(va_list args, int *count)
{
	char	*str;
	int		len;

	str = ft_itoa(va_arg(args, int));
	len = ft_strlen(str);
	write(1, str, len);
	*count += len;
	free(str);
}
