/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:01:34 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/30 20:29:42 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

void	ft_args(const char *text, int *count, va_list args);
void	ft_args_char(va_list args);
void	ft_putchar(char c);
int		ft_printf(const char *text, ...);
void	ft_putchar(char c);
void	ft_args_int(va_list args, int *count);
void	ft_args_str(va_list args, int *count);
void	ft_args_uns_int(va_list args, int *count);
void	ft_put_hex(unsigned long hex, int *count, int upper);
char	*ft_uitoa(unsigned int n);
void	ft_args_ptr(va_list args, int *count);

#endif