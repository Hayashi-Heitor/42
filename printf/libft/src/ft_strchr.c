/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:13:29 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/23 18:24:27 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char	*pointer;
	char		char_c;

	pointer = s;
	char_c = (char)c;
	while (*pointer != '\0' && *pointer != char_c)
		pointer++;
	if (*pointer == char_c)
		return ((char *)pointer);
	return (0);
}
