/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/06 21:21:47 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_list(char *str)
{
	t_stack	*list;
	t_stack	*temp;
	int		value;

	list = NULL;
	while (*str)
	{
		while (*str && !(ft_isdigit(*str) || *str == '-' || *str == '+'))
			str++;
		if (!*str)
			break ;
		value = ft_atoi(str);
		temp = new_node(value);
		while (*str && (ft_isdigit(*str) || *str == '-' || *str == '+'))
			str++;
		addnode_back(&list, temp);
	}
	return (list);
}

//void	add_moves(t_orch *info, char *move)
//{
//	t_orch	*last;
//
//	if (!info->moves)
//		info->moves = move;
//	last = info;
//}
