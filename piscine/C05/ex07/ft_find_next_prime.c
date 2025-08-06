/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:19:04 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/31 18:04:10 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int numb);
int	ft_find_next_prime(int nb);

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

int	ft_find_next_prime(int nb)
{
	if (nb < 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
