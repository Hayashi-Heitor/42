/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:34:06 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/07 16:04:04 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	guess;
	int	odd;
	int	count;

	count = 0;
	guess = 0;
	odd = 1;
	while (guess < nb)
	{
		guess += odd;
		odd += 2;
		count ++;
	}
	if (guess == nb)
		return (count);
	return (0);
}
