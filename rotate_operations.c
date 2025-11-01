/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/01 20:40:31 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_lst **stack_a)
{
	rotate(stack_a);
}

void	rb(t_lst **stack_b)
{
	rotate(stack_b);
}

void	rra(t_lst **stack_a)
{
	rrotate(stack_a);
}

void	rrb(t_lst **stack_b)
{
	rrotate(stack_b);
}
