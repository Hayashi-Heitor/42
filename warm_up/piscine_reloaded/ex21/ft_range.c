/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:41:15 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/08 12:51:53 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*array;
	int	index;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	index = 0;
	while (min < max)
		array[index++] = min++;
	return (array);
}
