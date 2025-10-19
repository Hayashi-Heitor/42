/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:50:50 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/25 21:31:39 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	unsigned int	i;

	if (!dest && !src)
		return (0);
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	i = 0;
	if (c_src < c_dest)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	else
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}
