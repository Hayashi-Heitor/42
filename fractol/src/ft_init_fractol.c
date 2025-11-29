/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_fractol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:27:03 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:27:04 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init_fractol(t_fractol *f)
{
	f->mlx_ptr = NULL;
	f->win_ptr = NULL;
	f->img_ptr = NULL;
	f->img_data = NULL;
	f->mlx_ptr = mlx_init();
	if (!f->mlx_ptr)
		ft_clean_exit(f);
	f->win_ptr = mlx_new_window(f->mlx_ptr, WIDTH, HEIGHT, "fractol");
	if (!f->win_ptr)
		ft_clean_exit(f);
	f->img_ptr = mlx_new_image(f->mlx_ptr, WIDTH, HEIGHT);
	if (!f->img_ptr)
		ft_clean_exit(f);
	f->img_data = mlx_get_data_addr(f->img_ptr, &f->bpp, &f->l_size, &f->end);
	if (!f->img_data)
		ft_clean_exit(f);
	f->max_iter = MAX_ITER;
	f->zoom = 1.0;
	f->offset_x = 0.0;
	f->offset_y = 0.0;
	f->z.real = 0.0;
	f->z.imag = 0.0;
}
