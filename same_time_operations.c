/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:41:51 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/01 20:47:05 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_lst **stack_a, t_lst **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rr(t_lst **stack_a, t_lst **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	rrr(t_lst **stack_a, t_lst **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
}
