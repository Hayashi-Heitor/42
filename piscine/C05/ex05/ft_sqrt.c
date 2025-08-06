/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:26:55 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/31 16:12:23 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	guess;
	int	odd;
	int	count;

	odd = 1;
	guess = 0;
	count = 0;
	while (guess < nb)
	{
		guess += odd;
		odd += 2;
		count++;
	}
	if (guess == nb)
		return (count);
	else
		return (0);
}
