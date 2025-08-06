/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:45:35 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/03 22:08:57 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max);

int *ft_range(int min, int max)
{
	int *pointer;
	int *original_pointer;

	if (min >= max)
		return (0);
	pointer = malloc(sizeof(int) * (min - max));
	original_pointer = pointer;
	while (min < max)
	{
		*pointer = max - min++;
		pointer++;
	}
	return (original_pointer);
}
