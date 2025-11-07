/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/07 14:48:36 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_orch *info)
{
	rotate(&info->a);
	move_list(info, "ra");
	printf("   ra\n");
}

void	rb(t_orch *info)
{
	rotate(&info->b);
	move_list(info, "rb");
	printf("   rb\n");
}

void	rra(t_orch *info)
{
	rrotate(&info->a);
	move_list(info, "rra");
	printf("   rra\n");
}

void	rrb(t_orch *info)
{
	rrotate(&info->b);
	move_list(info, "rrb");
	printf("   rrb\n");
}
