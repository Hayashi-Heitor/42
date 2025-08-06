/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:16:21 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/19 13:19:07 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	char	*s;

	s = str;
	while (*s && (*s >= 'a' && *s <= 'z'))
		s++;
	if (*s == '\0')
		return (1);
	else
		return (0);
}
