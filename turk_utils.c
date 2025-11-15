/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:36:29 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/15 18:10:44 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_cost(t_orch *stacks, t_calc *cost, int cmp)
{
	int		target;
	int		dist;
	t_calc	new_cost;

	ft_bzero(&new_cost, sizeof(t_calc));
	target = cost->max;
	if (cmp < cost->max)
		target = find_smallest_bigger(stacks->a, cost->max, cmp);
	if (cmp > cost->max)
		target = cost->min;
	dist = find_target(stacks->a, target);
	if (dist <= cost->len / 2)
		new_cost.moves[RA] = dist;
	else
		new_cost.moves[RRA] = cost->len - dist;
	dist = find_target(stacks->b, cmp);
	if (dist <= lstsize(stacks->b) / 2)
		new_cost.moves[RB] = dist;
	else
		new_cost.moves[RRB] = lstsize(stacks->b) - dist;
	if ((sum_moves(new_cost.moves, MOVEMENTS)) < (sum_moves(cost->moves, MOVEMENTS)))
		rearrange_moves(&new_cost, cost, MOVEMENTS);
}

int	find_smallest_bigger(t_stack *loose, int bigger, int cmp)
{
	t_stack	*actual;
	int		len;

	actual = loose;
	len = lstsize(loose);
	while (len--)
	{
		if (actual->index > cmp && actual->index < bigger)
			bigger = actual->index;
		actual = actual->next;
	}
	return (bigger);
}

int	sum_moves(int *array, int size)
{
	int	count;
	int	i;
	
	i = -1;
	count = 0;
	while (size--)
		count += array[++i];
	return (count);
}

void	rearrange_moves(t_calc *new, t_calc *old, int size)
{
	while (size--)
		old->moves[size] = new->moves[size];
}
