/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:27:01 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_orch *info)
{
	rotate(&info->a);
}

void	rb(t_orch *info)
{
	rotate(&info->b);
}

void	rra(t_orch *info)
{
	rrotate(&info->a);
}

void	rrb(t_orch *info)
{
	rrotate(&info->b);
}
