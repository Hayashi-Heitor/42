/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:40:56 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/22 19:51:07 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		index_s1;
	int		index_s2;

	if (!s1 || !s2)
		return (0);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	index_s1 = 0;
	while (s1[index_s1] != '\0')
	{
		str[index_s1] = s1[index_s1];
		index_s1++;
	}
	index_s2 = 0;
	str[index_s1] = s2[index_s2++];
	while (s2[index_s2] != '\0')
	{
		str[index_s1 + index_s2] = s2[index_s2];
		index_s2++;
	}
	str[index_s1 + index_s2] = '\0';
	return (str);
}
