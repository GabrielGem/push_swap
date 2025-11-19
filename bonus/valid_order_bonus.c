/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_order_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:56:44 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:27:01 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	valid_order(t_stack *list)
{
	t_stack	*current;

	current = list;
	while (current->next != list)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
