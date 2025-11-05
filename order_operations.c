/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:22:09 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 19:37:51 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	swap(a);
	printf("   sa\n");
}

void	sb(t_stack **b)
{
	swap(b);
	printf("   sb\n");
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	printf("   pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	printf("   pb\n");
}
