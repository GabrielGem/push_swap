/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:41:51 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 10:07:56 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_orch *info)
{
	swap(&info->a);
	swap(&info->b);
	ft_putstr_fd("ss\n", 1);
}

void	rr(t_orch *info)
{
	rotate(&info->a);
	rotate(&info->b);
	ft_putstr_fd("rr\n", 1);
}

void	rrr(t_orch *info)
{
	rrotate(&info->a);
	rrotate(&info->b);
	ft_putstr_fd("rrr\n", 1);
}
