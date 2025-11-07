/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/06 15:48:20 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_orch *info)
{
	rotate(&info->a);
	printf("   ra\n");
}

void	rb(t_orch *info)
{
	rotate(&info->b);
	printf("   rb\n");
}

void	rra(t_orch *info)
{
	rrotate(&info->a);
	printf("   rra\n");
}

void	rrb(t_orch *info)
{
	rrotate(&info->b);
	printf("   rrb\n");
}
