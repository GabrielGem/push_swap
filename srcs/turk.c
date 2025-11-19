/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:21:57 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 11:02:29 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_calc	update_cost(t_orch *stacks);
static void		pre_order_list_b(t_orch *stacks);
static void		push_smaller_to_top(t_orch *stacks);

void	turk(t_orch *stacks)
{
	t_calc	cost;
	t_stack	*actual;
	int		size;

	pre_order_list_b(stacks);
	sort_three_numbers(stacks);
	while (stack_size(stacks->b) != 0)
	{
		cost = update_cost(stacks);
		calc_cost(stacks, &cost, cost.cmp);
		actual = stacks->b;
		size = stack_size(stacks->b);
		while (size--)
		{
			calc_cost(stacks, &cost, actual->index);
			actual = actual->next;
		}
		double_moves(&cost);
		do_moves(stacks, &cost);
		pa(stacks);
	}
	push_smaller_to_top(stacks);
}

static t_calc	update_cost(t_orch *stacks)
{
	t_calc	cost;

	cost.min = big_or_small_number(stacks->a, SMALL);
	cost.max = big_or_small_number(stacks->a, BIG);
	cost.len = stack_size(stacks->a);
	cost.cmp = stacks->b->index;
	ft_memset(cost.moves, 1, sizeof(cost.moves));
	return (cost);
}

static void	pre_order_list_b(t_orch *stacks)
{
	int	total_size;
	int	actual_size;

	total_size = stack_size(stacks->a);
	actual_size = total_size;
	while (actual_size > total_size / 2 && actual_size > 3)
	{
		if (stacks->a->index <= total_size / 2)
			pb(stacks);
		else
			ra(stacks);
		actual_size = stack_size(stacks->a);
	}
	while (stack_size(stacks->a) > 3)
		pb(stacks);
}

static void	push_smaller_to_top(t_orch *stacks)
{
	int		dist;
	t_calc	cost;

	dist = find_target(stacks->a, 0);
	ft_bzero(&cost, sizeof(t_calc));
	if (dist <= stack_size(stacks->a) / 2)
		cost.moves[RA] = dist;
	else
		cost.moves[RRA] = stack_size(stacks->a) - dist;
	do_moves(stacks, &cost);
}
