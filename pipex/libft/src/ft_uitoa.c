/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:08:41 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/30 19:08:48 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_digits(unsigned int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	allocate_number(unsigned int n, char *ptr, int i)
{
	if (n > 9)
		allocate_number(n / 10, ptr, i - 1);
	ptr[i] = (n % 10) + '0';
}

char	*ft_uitoa(unsigned int n)
{
	char	*ptr;
	int		len;

	len = count_digits(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	allocate_number(n, ptr, len - 1);
	return (ptr);
}
