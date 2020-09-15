/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_burningship.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:21:04 by dlongfel          #+#    #+#             */
/*   Updated: 2020/09/15 16:21:05 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_data	init_burningship(t_data params)
{
	params.arg.shift_x = 2.0;
	params.arg.shift_y = 2.0;
	params.fractal_type = "burningship";
	params = cl_krenal_creat(params, "srcs/fractol/burningship.cl");
	error(params.cl.ret);
	return (params);
}
