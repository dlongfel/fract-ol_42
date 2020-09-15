/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:20:51 by dlongfel          #+#    #+#             */
/*   Updated: 2020/09/15 16:20:51 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		clos_e(void *param)
{
	(void)param;
	exit(0);
}

void	wrong_name(void)
{
	ft_putstr("wrong fractal name\ntype = mandelbrot, "
		"julia, mult_julia, mandelbar, burningship, celtic"
	", buffalo, perp_buffalo\n");
	exit(0);
}

void	error(int code)
{
	if (code)
	{
		ft_putnbr(code);
		ft_putstr("\n");
		ft_putstr("somthing gows wrong\n");
		exit(code);
	}
}
