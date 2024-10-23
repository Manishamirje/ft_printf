# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 12:52:39 by mmirje            #+#    #+#              #
#    Updated: 2024/04/20 14:21:57 by mmirje           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putptr.c\
		ft_putu.c ft_puthex.c ft_strchr.c

OBJS = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJS)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
