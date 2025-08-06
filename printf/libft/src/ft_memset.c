/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:07:56 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/14 21:03:20 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	c_char;
	unsigned char	*s_char;
	unsigned int	i;

	i = 0;
	c_char = (unsigned char) c;
	s_char = (unsigned char *) s;
	while (i < n)
	{
		s_char[i] = c_char;
		i++;
	}
	return (s);
}
