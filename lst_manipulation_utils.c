/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:27:15 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 17:49:50 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstsize(t_stack *lst)
{
	int		i;
	t_stack	*current;

	i = 0;
	current = lst;
	while (current->next != lst)
	{
		current = current->next;
		i++;
	}
	return (++i);
}
