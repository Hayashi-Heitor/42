/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 20:51:58 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/31 16:14:10 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	div;

	if (nb == 0 || nb == 1)
		return (0);
	div = 2;
	while (div < nb)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	if (nb % 1 == 0 && nb % div == 0)
		return (1);
	return (0);
}
