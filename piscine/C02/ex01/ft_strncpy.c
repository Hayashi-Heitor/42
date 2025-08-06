/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:34:54 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/19 14:25:34 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*original_pointer;

	original_pointer = dest;
	while (n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}
	return (original_pointer);
}
