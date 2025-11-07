/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:22:09 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/07 14:47:33 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_orch *info)
{
	swap(&info->a);
	move_list(info, "sa");
	printf("   sa\n");
}

void	sb(t_orch *info)
{
	swap(&info->b);
	move_list(info, "sb");
	printf("   sb\n");
}

void	pa(t_orch *info)
{
	push(&info->a, &info->b);
	move_list(info, "pa");
	printf("   pa\n");
}

void	pb(t_orch *info)
{
	push(&info->b, &info->a);
	move_list(info, "pb");
	printf("   pb\n");
}
