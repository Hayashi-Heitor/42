/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_julia.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:26:50 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:26:53 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_calculate_iter(t_complex z_init, t_complex c_const, int max_iter)
{
	t_complex	z;
	double		z_temp_real;
	int			iter;

	z = z_init;
	iter = 0;
	while (iter < max_iter)
	{
		z_temp_real = z.real * z.real - z.imag * z.imag + c_const.real;
		z.imag = 2.0 * z.real * z.imag + c_const.imag;
		z.real = z_temp_real;
		if (z.real * z.real + z.imag * z.imag > 4.0)
			break ;
		iter++;
	}
	return (iter);
}

void	ft_draw_julia(t_fractol *fractol)
{
	int			x_pixel;
	int			y_pixel;
	t_complex	z_init;
	int			iter;
	int			color;

	y_pixel = 0;
	while (y_pixel < HEIGHT)
	{
		x_pixel = 0;
		while (x_pixel < WIDTH)
		{
			z_init.real = ft_map_x_to_real(x_pixel, fractol);
			z_init.imag = ft_map_y_to_imag(y_pixel, fractol);
			iter = ft_calculate_iter(z_init, fractol->c, fractol->max_iter);
			color = ft_color(iter, fractol->max_iter);
			ft_put_pixel(fractol, x_pixel, y_pixel, color);
			x_pixel++;
		}
		y_pixel++;
	}
}
