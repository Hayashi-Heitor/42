/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:27:16 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:27:17 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_pixel(t_fractol *fractol, int x, int y, int color)
{
	int	i;

	i = 0;
	if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
	{
		i = (y * fractol->l_size) + (x * (fractol->bpp / 8));
		*(unsigned int *)(fractol->img_data + i) = color;
	}
}

static int	ft_create_trgb(int t, int r, int g, int b)
{
	int	color;

	color = (t << 24 | r << 16 | g << 8 | b);
	return (color);
}

int	ft_color(int iterations, int max_iter)
{
	int	r;
	int	g;
	int	b;

	if (iterations == max_iter)
		return (0x000000);
	r = (iterations * 10) % 256;
	g = (iterations * 25) % 256;
	b = (iterations * 45) % 256;
	return (ft_create_trgb(0, r, g, b));
}

double	ft_map_x_to_real(int x, t_fractol *fractol)
{
	return (fractol->offset_x + (x / fractol->zoom) * 4.0 / WIDTH - 2.0);
}

double	ft_map_y_to_imag(int y, t_fractol *fractol)
{
	return (fractol->offset_y + (y / fractol->zoom) * 4.0 / HEIGHT - 2.0);
}
