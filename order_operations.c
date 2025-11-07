/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:22:09 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/06 15:43:13 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_orch *info)
{
	swap(&info->a);
	printf("   sa\n");
}

void	sb(t_orch *info)
{
	swap(&info->b);
	printf("   sb\n");
}

void	pa(t_orch *info)
{
	push(&info->a, &info->b);
	printf("   pa\n");
}

void	pb(t_orch *info)
{
	push(&info->b, &info->a);
	printf("   pb\n");
}
