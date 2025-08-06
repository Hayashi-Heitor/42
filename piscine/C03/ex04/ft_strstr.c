/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:59:59 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/24 18:47:17 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	char	*start_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			temp = str;
			start_to_find = to_find;
			while (*temp == *start_to_find && *start_to_find)
			{
				start_to_find++;
				temp++;
			}
			if (*start_to_find == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
