/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_julia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:21:13 by dlongfel          #+#    #+#             */
/*   Updated: 2020/09/15 16:21:14 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_data	init_julia(t_data params)
{
	params.arg.shift_x = 0.7;
	params.arg.shift_y = 2.0;
	params.fractal_type = "julia";
	params = cl_krenal_creat(params, "srcs/fractol/draw_julia.cl");
	error(params.cl.ret);
	return (params);
}
