/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:30:51 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 11:31:13 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_orch *info)
{
	int	check;

	check = swap(&info->a);
	if (check)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_orch *info)
{
	int	check;

	check = swap(&info->b);
	if (check)
		ft_putstr_fd("sb\n", 1);
}
