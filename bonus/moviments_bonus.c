/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moviments_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:48:36 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:27:01 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	swap(t_stack **stack)
{
	t_stack	*swap;
	t_stack	*last;

	if (!*stack)
		return (0);
	last = *stack;
	while (last->next != *stack)
		last = last->next;
	swap = (*stack)->next;
	last->next = swap;
	(*stack)->next = swap->next;
	swap->next = *stack;
	*stack = swap;
	return (1);
}

int	push(t_stack **dest, t_stack **src)
{
	t_stack	*temp;

	if (!*src)
		return (0);
	temp = stack_detach_first(src);
	stack_addnode_front(dest, temp);
	return (1);
}

int	rotate(t_stack **stack)
{
	if (!*stack)
		return (0);
	*stack = (*stack)->next;
	return (1);
}

int	rrotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack)
		return (0);
	last = *stack;
	while (last->next != *stack)
		last = last->next;
	*stack = last;
	return (1);
}
