/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_moves.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:18:29 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 11:18:51 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_moves(t_calc *cost)
{
	while (cost->moves[RB] != 0 && cost->moves[RA] != 0)
	{
		cost->moves[RB]--;
		cost->moves[RA]--;
		cost->moves[RR]++;
	}
	while (cost->moves[RRB] != 0 && cost->moves[RRA] != 0)
	{
		cost->moves[RRB]--;
		cost->moves[RRA]--;
		cost->moves[RRR]++;
	}
}
