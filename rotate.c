/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:36:52 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 10:09:10 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_orch *info)
{
	int	check;

	check = rotate(&info->a);
	if (check)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_orch *info)
{
	int	check;

	check = rotate(&info->b);
	if (check)
		ft_putstr_fd("rb\n", 1);
}

void	rra(t_orch *info)
{
	int	check;

	check = rrotate(&info->a);
	if (check)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_orch *info)
{
	int	check;

	check = rrotate(&info->b);
	if (check)
		ft_putstr_fd("rrb\n", 1);
}
