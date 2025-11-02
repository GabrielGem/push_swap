/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:33 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/01 20:49:55 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_lst
{
	int				value;
	struct s_lst	*next;
}	t_lst;

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
t_lst	*validations(char **args);
void	valid_str(char *str);
void	valid_double_numbers(t_lst **list);
void	valid_order(t_lst **list);
// list
t_lst	*create_list(char *str);
t_lst	*new_node(int content);
void	addnode_back(t_lst **lst, t_lst *new);
void	addnode_front(t_lst **lst, t_lst *new);
t_lst	*lstdetach_first(t_lst **stack);
void	lstclear(t_lst **lst, void (*del)(void *));
// clear and messages
void	memclear(void *adress, int option);
void	error_message(void);
// moviments
void	moviments(t_lst **stack, t_lst **stackb);
void	swap(t_lst **stack);
void	rotate(t_lst **stack);
void	rrotate(t_lst **stack);
void	push(t_lst **stack, t_lst **stackb);
//operations
void	sa(t_lst **stack_a);
void	sb(t_lst **stack_b);
void	ss(t_lst **stack_a, t_lst **stack_b);
void	pa(t_lst **stack_a, t_lst **stack_b);
void	pb(t_lst **stack_b, t_lst **stack_a);
void	ra(t_lst **stack_a);
void	rb(t_lst **stack_a);
void	rr(t_lst **stack_a, t_lst **stack_b);
void	rra(t_lst **stack_a);
void	rrb(t_lst **stack_a);
void	rrr(t_lst **stack_a, t_lst **stack_b);
// print moviments
void	print_list(t_lst **stack, t_lst **stackb);
#endif
