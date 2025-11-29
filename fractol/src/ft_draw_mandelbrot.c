/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_mandelbrot.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:26:57 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:35:45 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_calculate_iter(t_complex c, int max_iter)
{
	t_complex	z;
	double		z_temp_real;
	int			iter;

	z.real = 0.0;
	z.imag = 0.0;
	iter = 0;
	while (iter < max_iter)
	{
		z_temp_real = z.real * z.real - z.imag * z.imag + c.real;
		z.imag = 2.0 * z.real * z.imag + c.imag;
		z.real = z_temp_real;
		if (z.real * z.real + z.imag * z.imag > 4.0)
			break ;
		iter++;
	}
	return (iter);
}

void	ft_draw_mandelbrot(t_fractol *fractol)
{
	int			x_pixel;
	int			y_pixel;
	t_complex	c;
	int			iter;
	int			color;

	y_pixel = 0;
	while (y_pixel < HEIGHT)
	{
		x_pixel = 0;
		while (x_pixel < WIDTH)
		{
			c.real = ft_map_x_to_real(x_pixel, fractol);
			c.imag = ft_map_y_to_imag(y_pixel, fractol);
			iter = ft_calculate_iter(c, fractol->max_iter);
			color = ft_color(iter, fractol->max_iter);
			ft_put_pixel(fractol, x_pixel, y_pixel, color);
			x_pixel++;
		}
		y_pixel++;
	}	
}
