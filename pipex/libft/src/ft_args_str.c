/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:51:02 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/30 20:37:27 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_args_str(va_list args, int *count)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (str)
	{
		len = ft_strlen(str);
		write(1, str, len);
		*count += len;
	}
	else
	{
		write(1, "(null)", 6);
		*count += 6;
	}
}
