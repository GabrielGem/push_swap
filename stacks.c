/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/14 11:20:55 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*create_list(char *str)
{
	t_lst	*list;
	t_lst	*temp;
	int		value;

	list = NULL;
	while (*str)
	{
		while (!ft_isdigit(*str) && *str)
			str++;
		if (!*str)
			break ;
		value = ft_atoi(str);
		temp = new_node(value);
		while (ft_isdigit(*str) && *str)
			str++;
		addnode_back(&list, temp);
	}
	return (list);
}
