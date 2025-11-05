/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:33 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 19:11:42 by gabrgarc         ###   ########.fr       */
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

enum	e_options
{
	CLEAR,
	CLEARSTR,
	CLEARLIST,
	CLEARSTACK,
	ERROR,
	ERRORSTR,
	ERRORLIST,
	ERRORSTACK
};

int		main(int argc, char **argv);

// validations
t_stack	*validations(char **args);
void	valid_str(char *str);
void	valid_double_numbers(t_stack *list);
void	valid_order(t_stack **list);
// list
t_stack	*create_list(char *str);
t_stack	*new_node(int content);
void	addnode_back(t_stack **list, t_stack *new);
void	addnode_front(t_stack **list, t_stack *new);
t_stack	*lstdetach_first(t_stack **list);
void	lstclear(t_stack **list, void (*del)(void *));
// clear and messages
void	memclear(void *adress, int option);
void	error_message(void);
// moviments
void	moviments(t_stack **a, t_stack **b);
void	swap(t_stack **stack);
void	push(t_stack **dest, t_stack **src);
void	rotate(t_stack **stack);
void	rrotate(t_stack **stack);
//operations
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **a);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **a);
void	rrr(t_stack **a, t_stack **b);
// print moviments
void	print_list(t_stack **a, t_stack **b);
int		stacksize(t_stack *list);
#endif
