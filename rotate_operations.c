/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 19:37:53 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	rotate(a);
	printf("   ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	printf("   rb\n");
}

void	rra(t_stack **a)
{
	rrotate(a);
	printf("   rra\n");
}

void	rrb(t_stack **b)
{
	rrotate(b);
	printf("   rrb\n");
}
