/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:00:58 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/31 18:03:17 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	multi;

	if (nb < 0)
		return (0);
	res = 1;
	multi = nb;
	while (multi > 0)
	{
		res = res * multi;
		multi--;
	}
	return (res);
}
