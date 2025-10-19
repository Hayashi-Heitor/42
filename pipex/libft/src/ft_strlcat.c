/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:55:10 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/21 20:40:57 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len_dst;
	size_t	len_src;

	len_src = 0;
	len_dst = 0;
	while (len_dst < size && dst[len_dst] != '\0')
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (len_dst == size)
		return (len_src + size);
	index = 0;
	while (len_dst + index < size - 1 && src[index] != '\0')
	{
		dst[len_dst + index] = src[index];
		index++;
	}
	if (len_dst + index < size)
		dst[len_dst + index] = '\0';
	return (len_dst + len_src);
}
