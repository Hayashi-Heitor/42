/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:55:15 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/26 20:41:19 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(unsigned int n)
{
	int	count;

	if (n == 0)
		return (1);
	else
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

char	*ft_itoa(int n)
{
	char			*ptr;
	size_t			len;
	int				neg;
	unsigned int	num;

	neg = 0;
	num = (unsigned int)n;
	if (n < 0)
	{
		neg = 1;
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;
	len = count_digits(num);
	if (neg)
		len += 1;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	allocate_number(num, ptr, len - 1);
	if (neg)
		ptr[0] = '-';
	return (ptr);
}
