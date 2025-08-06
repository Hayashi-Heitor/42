/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:53:42 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/24 22:32:24 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	str_i;
	char	*str;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] != '\0' && ft_check_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_check_set(s1[end], set))
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (0);
	str_i = 0;
	while (&str[start] <= &str[end])
	{
		str[str_i] = s1[start];
		start++;
		str_i++;
	}
	str[str_i] = '\0';
	return (str);
}
