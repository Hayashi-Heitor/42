/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:26:44 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/23 18:25:06 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;
	unsigned char	char_c;

	char_c = (unsigned char)c;
	char_s = (unsigned char *)s;
	while (n)
	{
		if (*char_s == char_c)
			return ((void *)char_s);
		char_s++;
		n--;
	}
	return (0);
}
