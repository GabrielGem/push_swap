# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 15:16:10 by gabrgarc          #+#    #+#              #
#    Updated: 2025/10/12 12:33:54 by gabrgarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror -g3 -I.
COMPILER = cc

SRCS = push_swap.c validations.c stacks.c memclear.c

LIBFT = libft.a
LIBFT_DIR = libft/

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(COMPILER) $(FLAGS) $(SRCS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -rf *.o
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all $(NAME) clean fclean re
