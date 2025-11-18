/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small_or_big_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:15:43 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 10:44:34 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	big_or_small_number(t_stack *list, int option)
{
	int		number;
	t_stack	*actual;

	number = list->index;
	actual = list;
	while (actual->next != list)
	{
		actual = actual->next;
		if (option == BIG && actual->index > number)
			number = actual->index;
		if (option == SMALL && actual->index < number)
			number = actual->index;
	}
	return (number);
}
