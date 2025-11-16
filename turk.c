/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:21:57 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 12:32:38 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_calc	update_cost(t_orch *stacks);
static void		pre_order_list_a(t_orch *stacks);
static void		push_smaller_to_top(t_orch *stacks);

void	turk(t_orch *stacks)
{
	t_calc	cost;
	t_stack	*actual;
	int		size;

	pre_order_list_a(stacks);
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

	cost.min = small_number(stacks->a);
	cost.max = big_number(stacks->a);
	cost.len = stack_size(stacks->a);
	cost.cmp = stacks->b->index;
	ft_memset(cost.moves, 1, sizeof(cost.moves));
	return (cost);
}

static void	pre_order_list_a(t_orch *stacks)
{
	int	list;

	list = stack_size(stacks->a);
	while (stack_size(stacks->a) > list / 2 && stack_size(stacks->a) > 3)
	{
		if (stacks->a->index < list / 2)
			pb(stacks);
		else
			ra(stacks);
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
