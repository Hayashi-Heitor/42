/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:22:27 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:22:28 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		a;

	src = (const unsigned char *)s;
	a = (unsigned char)c;
	while (n--)
	{
		if (*src == a)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
