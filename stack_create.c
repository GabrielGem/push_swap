/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 12:17:08 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_create(char *str)
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
			free(str);
		if (value > MAX_INT || value < MIN_INT)
			memclear(list, ERRORLIST);
		temp = stack_new_node(value);
		while (str[i] && (ft_isdigit(str[i]) || ft_issignal(str[i])))
			i++;
		stack_add_back(&list, temp);
	}
	return (list);
}
