/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:41:51 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/06 15:48:37 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_orch *info)
{
	swap(&info->a);
	swap(&info->b);
	printf("   ss\n");
}

void	rr(t_orch *info)
{
	rotate(&info->a);
	rotate(&info->b);
	printf("   rr\n");
}

void	rrr(t_orch *info)
{
	rrotate(&info->a);
	rrotate(&info->b);
	printf("   rrr\n");
}
