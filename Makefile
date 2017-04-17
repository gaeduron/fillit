# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/19 20:14:23 by gduron            #+#    #+#              #
#*   Updated: 2017/04/04 02:21:32 by bduron           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = libft

SRC = \
main.c \

CC = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

HEADER = .

VPATH = .

all: $(NAME)

$(NAME): $(SRC)
	@echo "Compiling $(LIB)..."
	@make -C $(LIB)/
	@gcc -o $(NAME) $^ $(CC) -I $(HEADER) -L $(LIB)/ -lft
	@echo "Fillit compilation:\033[92m OK\033[0m"

clean:
	@echo "Deleting:\033[33m $(LIB)/*.o\033[0m"
	@rm -f *.o
	@make -C $(LIB)/ clean

fclean: clean
	@echo "Deleting:\033[33m $(NAME)\033[0m"
	@echo "Deleting:\033[33m $(LIB).a\033[0m"
	@rm -f $(NAME)
	@rm -f $(LIB)/$(LIB).a

re: fclean all
