/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:54:08 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:31:05 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <stdio.h>

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

enum	e_options
{
	ERRORSTR,
	ERRORLIST,
	ERRORMSG
};

enum	e_statement
{
	FALSE,
	TRUE
};

enum	e_limits
{
	MAX_INT = 2147483647,
	MIN_INT = -2147483648
};

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
void	invalid_operation(t_orch *stacks, char *str);

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

#endif
