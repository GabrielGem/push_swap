/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:22:09 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 11:33:31 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_orch *info)
{
	int	check;

	check = push(&info->a, &info->b);
	if (check)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_orch *info)
{
	int	check;

	check = push(&info->b, &info->a);
	if (check)
		ft_putstr_fd("pb\n", 1);
}
