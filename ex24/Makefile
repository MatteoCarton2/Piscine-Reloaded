# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarton <mcarton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 19:52:49 by mcarton           #+#    #+#              #
#    Updated: 2024/10/09 19:53:43 by mcarton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -c $(SRC) && ar rc $(NAME) $(OFILES) && ranlib $(NAME)
	
clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all