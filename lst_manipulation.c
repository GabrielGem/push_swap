/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:20:24 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/14 12:07:01 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*new_node(int value)
{
	t_lst	*new_node;

	new_node = malloc(1 * sizeof(t_lst));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	addnode_back(t_lst **lst, t_lst *new)
{
	t_lst	*last;

	if (!new || !lst)
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
	last->next = new;
	new->next = *lst;
}

void	addnode_front(t_lst **lst, t_lst *new)
{
	t_lst	*last;

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

t_lst	*lstdetach_first(t_lst **stack)
{
	t_lst	*second;
	t_lst	*last;
	t_lst	*detached;

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

void	lstclear(t_lst **lst, void (*del)(void *))
{
	t_lst	*temp_node;
	t_lst	*last;

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
