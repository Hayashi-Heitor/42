/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:24:54 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:24:55 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr_dup;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	ptr_dup = ft_calloc((size + 1), sizeof(char));
	if (!ptr_dup)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr_dup[i] = s[i];
		i++;
	}
	return (ptr_dup);
}
