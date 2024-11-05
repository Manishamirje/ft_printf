# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:00:16 by mmirje            #+#    #+#              #
#    Updated: 2024/11/05 11:31:36 by mmirje           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_strchr.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all : $(NAME)

$(NAME) :  $(OBJ)
			$(CC) $(FLAGS) -c $(SRC)
			ar rc $(NAME) $(OBJ)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all
		