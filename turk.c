/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:21:57 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/15 17:55:42 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_calc	update_cost(t_orch *stacks)
{
	t_calc	cost;

	cost.min = small_number(stacks->a);
	cost.max = big_number(stacks->a);
	cost.len = lstsize(stacks->a);
	cost.cmp = stacks->b->index;
	ft_memset(cost.moves, 1, sizeof(cost.moves));
	return (cost);
}

int	find_target(t_stack *loose, int target)
{
	int		i;
	t_stack *actual;

	i = 0;
	actual = loose;
	while (actual->index != target)
	{
		actual = actual->next;
		i++;
	}
	return (i);
}

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

void	turk(t_orch *stacks)
{
	t_calc	cost;
	t_stack	*actual;
	int		dist;
	int		list;

	list = lstsize(stacks->a);
	while (lstsize(stacks->a) > list / 2 && lstsize(stacks->a) > 3)
	{
		if (stacks->a->index < list / 2)
			pb(stacks);
		else
			ra(stacks);
	}
	while (lstsize(stacks->a) > 3)
		pb(stacks);
	sort_three_numbers(stacks);
	while (lstsize(stacks->b) != 0)
	{
		cost = update_cost(stacks);
		calc_cost(stacks, &cost, cost.cmp);
		actual = stacks->b;
		list = lstsize(stacks->b);
		while (list--)
		{
			calc_cost(stacks, &cost, actual->index);
			actual = actual->next;
		}
		double_moves(&cost);
		do_moves(stacks, &cost);
		pa(stacks);
	}
	dist = find_target(stacks->a, 0);
	ft_bzero(&cost, sizeof(t_calc));
	if (dist <= lstsize(stacks->a) / 2)
		cost.moves[RA] = dist;
	else
		cost.moves[RRA] = lstsize(stacks->a) - dist;
	do_moves(stacks, &cost);
}
