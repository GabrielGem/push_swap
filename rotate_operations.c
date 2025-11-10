/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/10 14:17:33 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_orch *info)
{
	int	check;

	check = rotate(&info->a);
	if (check)
		move_list(info, "ra");
	printf("   ra\n");
}

void	rb(t_orch *info)
{
	int	check;

	check = rotate(&info->b);
	if (check)
		move_list(info, "rb");
	printf("   rb\n");
}

void	rra(t_orch *info)
{
	int	check;

	check = rrotate(&info->a);
	if (check)
		move_list(info, "rra");
	printf("   rra\n");
}

void	rrb(t_orch *info)
{
	int check;

	check = rrotate(&info->b);
	if (check)
		move_list(info, "rrb");
	printf("   rrb\n");
}
