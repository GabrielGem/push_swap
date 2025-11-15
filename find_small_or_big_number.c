/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small_or_big_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:15:43 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/14 11:02:29 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	big_number(t_stack *list)
{
	int		big;
	t_stack	*actual;

	big = list->index;
	actual = list;
	while (actual->next != list)
	{
		actual = actual->next;
		if (actual->index > big)
			big = actual->index;
	}
	return (big);
}

int	small_number(t_stack *list)
{
	int		small;
	t_stack	*actual;

	small = list->index;
	actual = list;
	while (actual->next != list)
	{
		actual = actual->next;
		if (actual->index < small)
			small = actual->index;
	}
	return (small);
}
