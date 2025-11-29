/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:27:07 by hhayashi          #+#    #+#             */
/*   Updated: 2025/11/29 15:27:08 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static char	*ft_str_tolower(const char *str)
{
	int		i;
	char	*lower;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	lower = (char *)malloc(sizeof(char) * (i + 1));
	if (!lower)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			lower[i] = str[i] + 32;
		else
			lower[i] = str[i];
		i++;
	}
	lower[i] = '\0';
	return (lower);
}

static double	ft_parse_frac(const char *str)
{
	double	frac;
	int		div;

	frac = 0.0;
	div = 1;
	while (*str >= '0' && *str <= '9')
	{
		frac = frac * 10 + (*str++ - '0');
		div *= 10;
	}
	return (frac / div);
}

double	ft_atof(const char *str)
{
	double	result;
	double	frac;
	int		sign;

	result = 0.0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	frac = 0.0;
	if (*str == '.')
		frac = ft_parse_frac(++str);
	return ((result + frac) * sign);
}

static void	ft_check_args(int argc, t_fractol *fractol, char *name, char **argv)
{
	if (ft_strcmp(name, "mandelbrot") == 0)
	{
		if (argc != 2)
			ft_clean_exit(fractol);
		fractol->fractal_type = MANDELBROT_TYPE;
	}
	else if (ft_strcmp(name, "julia") == 0)
	{
		if (argc != 4)
			ft_clean_exit(fractol);
		fractol->c.real = ft_atof(argv[2]);
		fractol->c.imag = ft_atof(argv[3]);
		fractol->fractal_type = JULIA_TYPE;
	}
	else
		ft_clean_exit(fractol);
}

void	ft_is_valid(int argc, char *argv[], t_fractol *fractol)
{
	char	*fractal_name;

	if (argc < 2)
		ft_clean_exit(fractol);
	fractal_name = ft_str_tolower(argv[1]);
	if (!fractal_name)
		ft_clean_exit(fractol);
	ft_check_args(argc, fractol, fractal_name, argv);
	free(fractal_name);
}
