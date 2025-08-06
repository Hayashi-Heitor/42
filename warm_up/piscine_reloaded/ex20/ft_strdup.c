/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 19:18:37 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/07 19:35:22 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char str[])
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

void	ft_strcpy(char *cpy, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	ft_strcpy(cpy, src);
	return (cpy);
}
