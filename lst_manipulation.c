/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:20:24 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/08 17:08:11 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*new_node(int value, char *move, int option)
{
	void	*new_node;

	if (option == VALUE)
		new_node = ft_calloc(sizeof(t_stack), 1);
	if (option == MOVE)
		new_node = ft_calloc(sizeof(t_moves), 1);
	if (!new_node)
		return (NULL);
	if (option == VALUE)
	{
		((t_stack *)new_node)->value = value;
		((t_stack *)new_node)->index = -1;
	}
	if (option == MOVE)
		((t_moves *)new_node)->move = move;
	return (new_node);
}

void	addnode_front(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = new;
		return ;
	}
	last = *lst;
	while (last->next != *lst)
		last = last->next;
	new->next = *lst;
	last->next = new;
	*lst = new;
}

t_stack	*lstdetach_first(t_stack **stack)
{
	t_stack	*second;
	t_stack	*last;
	t_stack	*detached;

	if (!stack || !*stack)
		return (NULL);
	if ((*stack)->next == *stack)
	{
		detached = *stack;
		*stack = NULL;
		return (detached);
	}
	second = (*stack)->next;
	last = *stack;
	while (last->next != *stack)
		last = last->next;
	last->next = second;
	detached = *stack;
	*stack = second;
	detached->next = NULL;
	return (detached);
}

void	lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*temp_node;
	t_stack	*last;

	if (!*lst || !lst || !del)
		return ;
	last = *lst;
	while (last->next != *lst)
		last = last->next;
	last->next = NULL;
	temp_node = *lst;
	while (temp_node)
	{
		*lst = temp_node->next;
		free(temp_node);
		temp_node = *lst;
	}
	*lst = NULL;
}

void	movelstclear(t_moves **lst, void (*del)(void *))
{
	t_moves	*temp_node;
	t_moves	*last;

	if (!*lst || !lst || !del)
		return ;
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	temp_node = *lst;
	while (temp_node)
	{
		*lst = temp_node->next;
		free(temp_node);
		temp_node = *lst;
	}
	*lst = NULL;
}
