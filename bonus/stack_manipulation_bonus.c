/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:20:24 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:27:01 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*stack_new_node(int value)
{
	t_stack	*new_node;

	new_node = ft_calloc(sizeof(t_stack), 1);
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	return (new_node);
}

void	stack_addnode_front(t_stack **lst, t_stack *new)
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

t_stack	*stack_detach_first(t_stack **stack)
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

void	stack_clear(t_stack **lst, void (*del)(void *))
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
