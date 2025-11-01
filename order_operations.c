/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:22:09 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/01 20:31:00 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_lst **stack_a)
{
	swap(stack_a);
}

void	sb(t_lst **stack_b)
{
	swap(stack_b);
}

void	pa(t_lst **stack_a, t_lst **stack_b)
{
	push(stack_a, stack_b);
}

void	pb(t_lst **stack_a, t_lst **stack_b)
{
	push(stack_b, stack_a);
}
