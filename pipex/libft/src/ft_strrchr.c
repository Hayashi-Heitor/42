/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:17:08 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/26 18:33:58 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (*s == (char)c)
		last = s;
	return ((char *)last);
}
