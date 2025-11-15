/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:22:09 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/15 08:51:29 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_orch *info)
{
	int	check;

	check = swap(&info->a);
	if (check)
		move_list(info, "sa");
	//printf("   sa\n");
}

void	sb(t_orch *info)
{
	int check;

	check = swap(&info->b);
	if (check)
		move_list(info, "sb");
	//printf("   sb\n");
}

void	pa(t_orch *info)
{
	int	check;

	check = push(&info->a, &info->b);
	if (check)
		move_list(info, "pa");
	//printf("   pa\n");
}

void	pb(t_orch *info)
{
	int	check;

	check = push(&info->b, &info->a);
	if (check)
		move_list(info, "pb");
	//printf("   pb\n");
}
