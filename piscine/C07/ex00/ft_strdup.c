/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:28:42 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/01 16:28:47 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);

int		ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
}

char	*ft_strdup(char *src)
{
	char *pointer;
	
	pointer = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(pointer, src);
	return (pointer);
}