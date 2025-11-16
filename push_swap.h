/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:33 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 12:30:12 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

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

enum	e_options
{
	ERRORSTR,
	ERRORLIST,
	ERRORMSG
};

enum	e_limits
{
	MAX_INT = 2147483647,
	MIN_INT = -2147483648
};

typedef struct s_calc
{
	int	min;
	int	max;
	int	cmp;
	int	len;
	int	moves[MOVEMENTS];
}	t_calc;

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_orch
{
	t_stack	*a;
	t_stack	*b;
}	t_orch;

int		main(int argc, char **argv);

// validations
t_stack	*validations(char **args);
int		valid_order(t_stack *list);

// stack
t_stack	*stack_create(char *str);
t_stack	*stack_new_node(int value);
void	stack_add_back(t_stack **list, t_stack *new);
void	stack_addnode_front(t_stack **list, t_stack *new);
t_stack	*stack_detach_first(t_stack **list);
int		stack_size(t_stack *lst);
void	stack_clear(t_stack **list, void (*del)(void *));

// clear and message
void	memclear(void *adress, int option);

// moviments
int		swap(t_stack **stack);
int		push(t_stack **dest, t_stack **src);
int		rotate(t_stack **stack);
int		rrotate(t_stack **stack);

//operations
void	pa(t_orch *info);
void	pb(t_orch *info);
void	sa(t_orch *info);
void	sb(t_orch *info);
void	ss(t_orch *info);
void	ra(t_orch *info);
void	rb(t_orch *info);
void	rr(t_orch *info);
void	rra(t_orch *info);
void	rrb(t_orch *info);
void	rrr(t_orch *info);

//sorting
void	turk(t_orch *stacks);
void	sort_three_numbers(t_orch *info);

//calcs
int		big_number(t_stack *list);
int		small_number(t_stack *list);
void	calc_cost(t_orch *stacks, t_calc *cost, int cmp);
int		find_target(t_stack *losse, int target);
void	double_moves(t_calc *cost);
void	do_moves(t_orch *stacks, t_calc *cost);

#endif
