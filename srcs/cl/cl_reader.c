/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cl_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:20:17 by dlongfel          #+#    #+#             */
/*   Updated: 2020/09/15 16:20:18 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

#define BUFFSIZE 4096

size_t	read_cl_src(char **src, char *file_name)
{
	int		fd;
	size_t	source_size;
	char	*source_str;
	char	*buf;
	int		ret;

	if (!(buf = malloc(sizeof(char) * (BUFFSIZE + 1))))
		exit(-1);
	fd = open(file_name, O_RDONLY);
	if (!(source_str = ft_strnew(0)))
		exit(-1);
	while ((ret = read(fd, buf, BUFFSIZE)) > 0)
	{
		buf[ret] = '\0';
		source_str = ft_strjoinfree(&source_str, &buf, 1);
	}
	free(buf);
	source_size = ft_strlen(source_str);
	*src = source_str;
	return (source_size);
}
