# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/15 16:22:01 by dlongfel          #+#    #+#              #
#    Updated: 2020/09/15 16:22:01 by dlongfel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fractol

SOURSE_DIRS		:= srcs srcs/cl srcs/dce srcs/fractol_init srcs/main srcs/mlx_and_inparams

SRC				:=	srcs/cl/cl_buffer.c \
					srcs/cl/cl_init.c \
					srcs/cl/cl_kernal_creat.c \
					srcs/cl/cl_reader.c \
					srcs/cl/cl_set_args.c \
					srcs/dce/control.c \
					srcs/dce/draw.c \
					srcs/dce/error.c \
					srcs/fractol_init/init_buffalo.c \
					srcs/fractol_init/init_burningship.c \
					srcs/fractol_init/init_celtic.c \
					srcs/fractol_init/init_julia.c \
					srcs/fractol_init/init_maldelbrot.c \
					srcs/fractol_init/init_mandelbar.c \
					srcs/fractol_init/init_prep_baffalo.c \
					srcs/main/main.c \
					srcs/mlx_and_inparams/init_params.c \
					srcs/mlx_and_inparams/mlx_init.c \

FLAGS			=	-Wall -Werror -Wextra -O2

framework		=	-L minilibx_macos -lmlx -framework OpenCL -framework OpenGL -framework AppKit -L libft -lft -O2

OBJECTS			=	$(notdir $(patsubst %.c,%.o, $(wildcard $(SRC))))

LIB_DIR			=	./libft/

LIB_OBJS		=	$(addprefix $(LIB_DIR), $(LIB_OBJ))

LIB_OBJ			=	*.o

RT_INC			=	header/fractol.h

LIB_INC			=	header/libft.h

LIB_MLX_FILE	=	minilibx_macos/libmlx.a

all: $(NAME)

$(NAME): $(LIB_OBJS) $(LIB_MLX_FILE) $(OBJECTS)
	gcc $(OBJECTS) -o $@ $(framework)

VPATH := $(SOURSE_DIRS)

$(LIB_MLX_FILE):
	make -C minilibx_macos

$(LIB_DIR)%.o: $(LIB_DIR)%.c $(LIB_INC) libft/Makefile
	make -C $(LIB_DIR)

%.o: %.c $(RT_INC) Makefile
	gcc $(FLAGS) -c $< -I header/

clean:
	make clean -C $(LIB_DIR)
	make clean -C minilibx_macos
	rm -rf *.o

fclean: clean
	make fclean -C $(LIB_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
