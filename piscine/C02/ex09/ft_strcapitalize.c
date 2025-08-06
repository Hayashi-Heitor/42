/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:36:17 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/24 12:21:57 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

int	is_alpha_low(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else
		return (0);
}

int	is_alpha_high(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else
		return (0);
}

int	is_numeric(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*original_pointer;

	original_pointer = str;
	while (*str != '\0')
	{
		if (str == original_pointer && is_alpha_low(str))
			*str -= 32;
		else if (is_alpha_low(str) && !is_alpha_low(str - 1)
			&& !is_alpha_high(str - 1) && !is_numeric(str - 1))
			*str -= 32;
		else if (is_alpha_high(str) && (is_alpha_low(str - 1)
				|| is_alpha_high(str - 1)))
			*str += 32;
		str++;
	}
	return (original_pointer);
}
