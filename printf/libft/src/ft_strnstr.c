/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:42:26 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/23 18:27:04 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_index;
	size_t	l_index;

	if (*little == '\0')
		return ((char *)big);
	b_index = 0;
	while (b_index < len && big[b_index] != '\0')
	{
		l_index = 0;
		while (b_index + l_index < len
			&& big[b_index + l_index] == little[l_index]
			&& big[b_index + l_index] != '\0'
			&& little[l_index] != '\0')
		{
			l_index++;
		}
		if (little[l_index] == '\0')
			return ((char *)&big[b_index]);
		b_index++;
	}
	return (0);
}
