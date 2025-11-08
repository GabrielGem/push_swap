/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/08 20:10:33 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_list(char *str)
{
	t_stack	*list;
	t_stack	*temp;
	long	value;
	int		i;

	list = NULL;
	i = 0;
	while (str[i])
	{
		while (str[i] && !(ft_isdigit(str[i]) || ft_issignal(str[i])))
			i++;
		if (!str[i])
			break ;
		value = ft_atol(&str[i]);
		if (value > MAX_INT || value < MIN_INT)
			memclear(str, CLEARSTR);
		if (value > MAX_INT || value < MIN_INT)
			memclear(list, ERRORLIST);
		temp = (t_stack *)new_node(value, NULL, VALUE);
		while (str[i] && (ft_isdigit(str[i]) || ft_issignal(str[i])))
			i++;
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
