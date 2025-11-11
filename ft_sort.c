/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:29 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/11 20:31:24 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_numbers(t_orch *info)
{
	int	first;
	int	second;
	int	third;

	first = info->a->index;
	second = info->a->next->index;
	third = info->a->next->next->index;
	if (valid_order(info->a))
		return ;
	if (second > first)
		rra(info);
	else if (second < first && third < first)
		ra(info);
	else if (second < first)
		sa(info);
	sort_three_numbers(info);
}

int	big_number(t_stack *list)
{
	int		big;
	t_stack	*actual;

	big = list->index;
	actual = list->next;
	while (actual->next != list)
	{
		if (actual->index > big)
			big = actual->index;
		actual = actual->next;
	}
	return (big);
}

int	small_number(t_stack *list)
{
	int		small;
	t_stack	*actual;

	small = list->index;
	actual = list->next;
	while (actual->next != list)
	{
		if (actual->index < small)
			small = actual->index;
		actual = actual->next;
	}
	return (small);
}
