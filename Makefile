# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 15:16:10 by gabrgarc          #+#    #+#              #
#    Updated: 2025/11/17 17:02:02 by gabrgarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
FLAGS = -Wall -Wextra -Werror -I.
COMPILER = cc

SRCS = \
	push_swap.c \
	input_validations.c \
	valid_order.c \
	stack_create.c stack_manipulation.c stack_manipulation_utils.c \
	clear_and_error.c \
	turk.c calc_cost.c sort_three_numbers.c find_small_or_big_number.c \
	find_target.c \
	check_double_moves.c do_moves.c \
	swap.c push.c rotate.c double.c \
	moviments.c

SRCS_BONUS = \
	checker_bonus.c

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME)

$(NAME): $(SRCS) $(LIBFT)
	$(COMPILER) $(FLAGS) $(SRCS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -sC $(LIBFT_DIR)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(SRCS_BONUS) $(LIBFT)
	$(COMPILER) $(FLAGS) $(SRCS_BONUS) -L$(LIBFT_DIR) -lft -o $(NAME_BONUS)

clean:
	rm -rf *.o
	$(MAKE) -sC $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -sC $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
