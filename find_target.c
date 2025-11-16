/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:21:10 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 11:21:53 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target(t_stack *loose, int target)
{
	int		i;
	t_stack	*actual;

	i = 0;
	actual = loose;
	while (actual->index != target)
	{
		actual = actual->next;
		i++;
	}
	return (i);
}
