/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:41:51 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:27:00 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ss(t_orch *info)
{
	swap(&info->a);
	swap(&info->b);
}

void	rr(t_orch *info)
{
	rotate(&info->a);
	rotate(&info->b);
}

void	rrr(t_orch *info)
{
	rrotate(&info->a);
	rrotate(&info->b);
}
