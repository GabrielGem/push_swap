/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moviments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:48:36 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 17:52:41 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*swap;
	t_stack	*last;

	if (!*stack)
		return ;
	last = *stack;
	while (last->next != *stack)
		last = last->next;
	swap = (*stack)->next;
	last->next = swap;
	(*stack)->next = swap->next;
	swap->next = *stack;
	*stack = swap;
}

void	push(t_stack **dest, t_stack **src)
{
	t_stack	*temp;

	if (!*src)
		return ;
	temp = lstdetach_first(src);
	addnode_front(dest, temp);
}

void	rotate(t_stack **stack)
{
	if (!*stack)
		return ;
	*stack = (*stack)->next;
}

void	rrotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack)
		return ;
	last = *stack;
	while (last->next != *stack)
		last = last->next;
	*stack = last;
}
