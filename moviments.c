/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moviments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:48:36 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/01 20:42:49 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_lst **stack)
{
	t_lst	*swap;
	t_lst	*last;

	last = *stack;
	while (last->next != *stack)
		last = last->next;
	swap = (*stack)->next;
	last->next = swap;
	(*stack)->next = swap->next;
	swap->next = *stack;
	*stack = swap;
}

void	push(t_lst **stack, t_lst **stackb)
{
	t_lst	*temp;

	temp = lstdetach_first(stack);
	addnode_front(stackb, temp);
}

void	rotate(t_lst **stack)
{
	*stack = (*stack)->next;
}

void	rrotate(t_lst **stack)
{
	t_lst	*last;

	last = *stack;
	while (last->next != *stack)
		last = last->next;
	*stack = last;
}
