/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:18:23 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/26 18:10:03 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_len(char const *s, unsigned int start, size_t len)
{
	if (len > ft_strlen(s) - start)
		return (len = ft_strlen(s) - start);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	if (!s)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = malloc(1);
		if (!sub)
			return (0);
		sub[0] = '\0';
		return (sub);
	}
	len = check_len(s, start, len);
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	index = 0;
	while (index < len && s[start + index] != '\0')
	{
		sub[index] = s[start + index];
		index++;
	}
	sub[index] = '\0';
	return (sub);
}
