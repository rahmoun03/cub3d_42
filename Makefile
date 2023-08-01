# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/30 12:53:19 by arahmoun          #+#    #+#              #
#    Updated: 2023/08/01 10:32:59 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub

GNL = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

SRCS = ${GNL} main.c utils.c readfile.c ft_split.c

MLX = -lmlx -framework OpenGL -framework AppKit

FLAGS = -Wall -Wextra -Werror

CC = cc ${FLAGS}


all: ${NAME}

${NAME}: ${SRCS}
	@${CC} ${SRCS} ${MLX} -o $@
	@tput setaf 2; echo "THE GAME IS READY"

clean:
	@rm -rf cub
	@tput setaf 1; echo "CLEAN COMPLET"

fclean: clean

re: clean all
