/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/07 19:21:44 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_list(char *str)
{
	t_stack	*list;
	t_stack	*temp;
	int		value;

	list = NULL;
	while (*str)
	{
		while (*str && !(ft_isdigit(*str) || ft_issignal(*str)))
			str++;
		if (!*str)
			break ;
		value = ft_atoi(str);
		temp = (t_stack *)new_node(value, NULL, VALUE);
		while (*str && (ft_isdigit(*str) || ft_issignal(*str)))
			str++;
		stack_add_back(&list, temp);
	}
	return (list);
}

void	move_list(t_orch *info, char *move)
{
	t_moves	*temp;

	if (!move)
		return ;
	temp = (t_moves *)new_node(0, move, MOVE);
	move_add_back(&info->moves, temp);
}
