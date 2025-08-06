/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:33:45 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/31 16:25:04 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	multiplier;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	multiplier = nb;
	while (power > 1)
	{
		nb = nb * multiplier;
		power--;
	}
	return (nb);
}
