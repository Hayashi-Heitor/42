/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:02:57 by liferrei          #+#    #+#             */
/*   Updated: 2025/09/13 20:07:54 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <math.h>

# include "../mlx/mlx.h"
# include "../libft/ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "keys.h"

// Window and image dimensions
# define WIDTH 800
# define HEIGHT 800

// Max iterations for fractal calculation [1,2]
# define MAX_ITER 40

// Mouse button codes for scroll
# define MOUSE_SCROLL_UP	4
# define MOUSE_SCROLL_DOWN	5

// Fractal type
# define MANDELBROT_TYPE	0
# define JULIA_TYPE			1

typedef struct s_complex
{
	double	real;
	double	imag;
}			t_complex;

// Main structure for MiniLibX and fractal parameters 
typedef struct s_fractol
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	char		*img_data;
	int			bpp;
	int			l_size;
	int			end;

	t_complex	c;
	t_complex	z;
	int			max_iter;
	int			fractal_type;
	double		zoom;
	double		offset_x;
	double		offset_y;
}				t_fractol;

int		main(int argc, char *argv[]);
void	ft_is_valid(int argc, char *argv[], t_fractol *fractol);
void	ft_init_fractol(t_fractol *f);
int		ft_handle_keypress(int keycode, t_fractol *fractol);
int		ft_handle_mouse(int button, int x, int y, t_fractol *frac);
int		ft_events(t_fractol *frac);
void	ft_draw_mandelbrot(t_fractol *fractol);
void	ft_draw_julia(t_fractol *fractol);
void	ft_put_pixel(t_fractol *fractol, int x, int y, int color);
int		ft_color(int iterations, int max_iter);
double	ft_map_x_to_real(int x, t_fractol *fractol);
double	ft_map_y_to_imag(int y, t_fractol *fractol);
int		ft_clean_exit(t_fractol *f);
int		ft_strcmp(const char *s1, const char *s2);
#endif
