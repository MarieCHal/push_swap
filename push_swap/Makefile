# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 14:28:46 by mchalard          #+#    #+#              #
#    Updated: 2022/03/29 13:03:54 by mchalard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAG = -Wall -Wextra -Werror
NAME = push_swap
SRC = pushswap.c ft_split.c ft_atoi.c index.c push.c replace.c swap.c checkerror.c rotate.c ft_printf.c sort.c sorting.c 
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<
$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
