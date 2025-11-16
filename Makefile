# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 15:16:10 by gabrgarc          #+#    #+#              #
#    Updated: 2025/11/16 12:28:57 by gabrgarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror -I.
COMPILER = cc

SRCS = \
	push_swap.c \
	input_validations.c stack_create.c memclear.c \
	stack_manipulation.c stack_manipulation_utils.c \
	swap.c push.c rotate.c same_time_operations.c \
	sort_three_numbers.c find_small_or_big_number.c turk.c calc_cost.c \
	moviments.c check_double_moves.c \
	do_moves.c find_target.c valid_order.c

LIBFT = libft.a
LIBFT_DIR = libft/

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(COMPILER) $(FLAGS) $(SRCS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -sC $(LIBFT_DIR)

clean:
	rm -rf *.o
	$(MAKE) -sC $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -sC $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all $(NAME) clean fclean re
