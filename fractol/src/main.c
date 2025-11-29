/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:27:20 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:46:27 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_print_usage(void)
{
	ft_printf("Usage:\n ./fractol [mandelbrot | julia c_real c_imag]\n");
	exit(1);
}

static void	ft_setup_hooks(t_fractol *fractol)
{
	mlx_hook(fractol->win_ptr, 2, (1L << 0), ft_handle_keypress, fractol);
	mlx_hook(fractol->win_ptr, 4, (1L << 2), ft_handle_mouse, fractol);
	mlx_hook(fractol->win_ptr, 17, 0L, ft_clean_exit, fractol);
}

int	main(int argc, char *argv[])
{
	t_fractol	fractol;

	fractol.mlx_ptr = NULL;
	fractol.win_ptr = NULL;
	fractol.img_ptr = NULL;
	fractol.img_data = NULL;
	if (argc < 2)
		ft_print_usage();
	ft_is_valid(argc, argv, &fractol);
	ft_init_fractol(&fractol);
	ft_events(&fractol);
	ft_setup_hooks(&fractol);
	mlx_loop(fractol.mlx_ptr);
	return (0);
}
