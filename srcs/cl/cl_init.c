/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cl_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:19:59 by dlongfel          #+#    #+#             */
/*   Updated: 2020/09/15 16:20:00 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_cl	cl_init(void)
{
	t_cl	cl;

	cl.ret = clGetPlatformIDs(2, &cl.pid, &cl.ret_num_p);
	error(cl.ret);
	cl.ret = clGetDeviceIDs(cl.pid, CL_DEVICE_TYPE_GPU, 1,
			&cl.did, &cl.ret_num_d);
	error(cl.ret);
	cl.context = clCreateContext(NULL, 1, &cl.did, NULL, NULL, &cl.ret);
	error(cl.ret);
	cl.c_cueue = clCreateCommandQueue(cl.context, cl.did, 0, &cl.ret);
	error(cl.ret);
	return (cl);
}
