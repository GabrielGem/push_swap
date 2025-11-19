/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:19:13 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 11:19:29 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_moves(t_orch *stacks, t_calc *cost)
{
	while (cost->moves[RRA]-- != 0)
		rra(stacks);
	while (cost->moves[RA]-- != 0)
		ra(stacks);
	while (cost->moves[RRB]-- != 0)
		rrb(stacks);
	while (cost->moves[RB]-- != 0)
		rb(stacks);
	while (cost->moves[RR]-- != 0)
		rr(stacks);
	while (cost->moves[RRR]-- != 0)
		rrr(stacks);
}
