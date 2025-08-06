/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:30:16 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/24 20:49:59 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	index;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > 4294967295 / size)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	index = 0;
	while (index < nmemb * size)
		ptr[index++] = 0;
	return ((void *)ptr);
}
