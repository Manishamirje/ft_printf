# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:00:16 by mmirje            #+#    #+#              #
#    Updated: 2024/11/05 11:47:13 by mmirje           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_strchr.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c \
		ft_putstr.c ft_putu.c

OBJS = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all : $(NAME)

$(NAME) :  $(OBJS)
			$(CC) $(FLAGS) -c $(SRC)
			ar rc $(NAME) $(OBJS)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
