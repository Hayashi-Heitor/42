/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:27:00 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:27:01 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_handle_keypress(int keycode, t_fractol *fractol)
{
	if (keycode == KEY_ESC)
		ft_clean_exit(fractol);
	else if (keycode == KEY_LEFT)
		fractol->offset_x -= 0.1 * fractol->zoom;
	else if (keycode == KEY_RIGHT)
		fractol->offset_x += 0.1 * fractol->zoom;
	else if (keycode == KEY_UP)
		fractol->offset_y -= 0.1 * fractol->zoom;
	else if (keycode == KEY_DOWN)
		fractol->offset_y += 0.1 * fractol->zoom;
	else
		return (0);
	return (1);
}

int	ft_clean_exit(t_fractol *f)
{
	if (f->img_ptr)
		mlx_destroy_image(f->mlx_ptr, f->img_ptr);
	if (f->win_ptr)
		mlx_destroy_window(f->mlx_ptr, f->win_ptr);
	if (f->mlx_ptr)
	{
		mlx_destroy_display(f->mlx_ptr);
		free(f->mlx_ptr);
	}
	exit(0);
}

int	ft_handle_mouse(int button, int x, int y, t_fractol *frac)
{
	double	mouse_real;
	double	mouse_imag;

	mouse_real = frac->offset_x + ((double)x / WIDTH - 0.5) * 4.0 * frac->zoom;
	mouse_imag = frac->offset_y + ((double)y / HEIGHT - 0.5) * 4.0 * frac->zoom;
	if (button == MOUSE_SCROLL_UP)
	{
		frac->zoom *= 0.8;
		frac->offset_x = mouse_real + (frac->offset_x - mouse_real) * 0.8;
		frac->offset_y = mouse_imag + (frac->offset_y - mouse_imag) * 0.8;
	}
	else if (button == MOUSE_SCROLL_DOWN)
	{
		frac->zoom *= 1.2;
		frac->offset_x = mouse_real + (frac->offset_x - mouse_real) * 1.2;
		frac->offset_y = mouse_imag + (frac->offset_y - mouse_imag) * 1.2;
	}
	else
		return (0);
	ft_events(frac);
	return (0);
}

int	ft_events(t_fractol *frac)
{
	if (frac ->fractal_type == MANDELBROT_TYPE)
		ft_draw_mandelbrot(frac);
	else if (frac->fractal_type == JULIA_TYPE)
		ft_draw_julia(frac);
	mlx_put_image_to_window(frac->mlx_ptr, frac->win_ptr, frac->img_ptr, 0, 0);
	return (0);
}
