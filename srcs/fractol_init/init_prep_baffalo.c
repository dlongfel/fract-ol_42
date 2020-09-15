/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_prep_baffalo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:21:35 by dlongfel          #+#    #+#             */
/*   Updated: 2020/09/15 16:21:36 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_data	init_perp_buffalo(t_data params)
{
	params.arg.shift_x = 2.0;
	params.arg.shift_y = 2.0;
	params.fractal_type = "perp_buffalo";
	params = cl_krenal_creat(params, "srcs/fractol/perp_baffalo.cl");
	error(params.cl.ret);
	return (params);
}
