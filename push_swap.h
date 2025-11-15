/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:33 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/14 18:37:49 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_moves
{
	char			*move;
	struct s_moves	*next;
}	t_moves;

typedef struct s_orch
{
	t_stack	*a;
	t_stack	*b;
	t_moves	*moves;
}	t_orch;

enum	e_moves
{
	RRA,
	RA,
	RRB,
	RB,
	RR,
	RRR,
	MOVEMENTS
};

typedef struct s_calc
{
	int	min;
	int	max;
	int	cmp;
	int	len;
	int	moves[MOVEMENTS];
}	t_calc;

enum	e_options
{
	CLEAR,
	CLEARSTR,
	CLEARLIST,
	CLEARSTACK,
	ERROR,
	ERRORSTR,
	ERRORLIST,
	ERRORMSG,
	ERRORSTACK,
	MOVE,
	VALUE
};

enum	e_limits
{
	MAX_INT = 2147483647,
	MIN_INT = -2147483648
};

int		main(int argc, char **argv);

// validations
t_stack	*validations(char **args);
void	valid_str(char *str);
void	valid_double_numbers(t_stack *list);
int		valid_order(t_stack *list);
void	empty_arguments(char **args);
// list
t_stack	*stack_list(char *str);
void	move_list(t_orch *info, char *move);
void	*new_node(int value, char *move, int option);
void	stack_add_back(t_stack **list, t_stack *new);
void	move_add_back(t_moves **lst, t_moves *new);
void	addnode_front(t_stack **list, t_stack *new);
t_stack	*lstdetach_first(t_stack **list);
int		lstsize(t_stack *lst);
void	lstclear(t_stack **list, void (*del)(void *));
void	movelstclear(t_moves **lst, void (*del)(void *));
// clear and messages
void	memclear(void *adress, int option);
void	error_message(void);
// moviments
int		swap(t_stack **stack);
int		push(t_stack **dest, t_stack **src);
int		rotate(t_stack **stack);
int		rrotate(t_stack **stack);
void	do_moves(t_orch *stacks, t_calc *cost);
//operations
void	sa(t_orch *info);
void	sb(t_orch *info);
void	ss(t_orch *info);
void	pa(t_orch *info);
void	pb(t_orch *info);
void	ra(t_orch *info);
void	rb(t_orch *info);
void	rr(t_orch *info);
void	rra(t_orch *info);
void	rrb(t_orch *info);
void	rrr(t_orch *info);
//sorting
void	sort_three_numbers(t_orch *info);
void	turk(t_orch *stacks);
//calcs
t_calc	update_cost(t_orch *stacks);
int		big_number(t_stack *list);
int		small_number(t_stack *list);
void	calc_cost(t_orch *stacks, t_calc *cost, int cmp);
int		sum_moves(int *array, int size);
int		find_smallest_bigger(t_stack *loose, int bigger, int cmp);
int		find_target(t_stack *losse, int target);
void	rearrange_moves(t_calc *new, t_calc *old, int size);
void	double_moves(t_calc *cost);
// print moviments
void	ft_lstitermoves(t_moves *lst, int (*f)(const char *, ...));
void	clear_list(t_orch *info);
void	moviments(t_orch *info);
void	print_list(t_orch *info);
int		stacksize(t_stack *list);

#endif
