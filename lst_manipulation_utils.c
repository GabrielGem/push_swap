/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:27:15 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/14 17:34:49 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstitermoves(t_moves *lst, int (*f)(const char *, ...))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f("%s\n", lst->move);
		lst = lst->next;
	}
}

int	lstsize(t_stack *lst)
{
	int		i;
	t_stack	*current;

	if (!lst)
		return (0);
	i = 0;
	current = lst;
	while (current->next != lst)
	{
		current = current->next;
		i++;
	}
	return (++i);
}

void	stack_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

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

void	move_add_back(t_moves **lst, t_moves *new)
{
	t_moves	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
