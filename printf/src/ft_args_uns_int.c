/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_uns_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:28:19 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/31 20:04:21 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_args_uns_int(va_list args, int *count)
{
	char	*str;
	int		len;

	str = ft_uitoa(va_arg(args, unsigned int));
	len = ft_strlen(str);
	write(1, str, len);
	*count += len;
	free(str);
}
