/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:25:02 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:25:03 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str3 = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!str3)
		return (NULL);
	ft_memcpy(str3, s1, s1_len);
	ft_memcpy(str3 + s1_len, s2, s2_len);
	return (str3);
}
