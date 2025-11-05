/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:12:12 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 19:10:46 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*validations(char **args)
{
	char	*str;
	t_stack	*list;

	str = ft_revsplit(args, ' ');
	valid_str(str);
	list = create_list(str);
	memclear(str, CLEARSTR);
	valid_double_numbers(list);
	valid_order(&list);
	return (list);
}

void	valid_str(char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || (*str == ' ') || (*str == '-')))
			memclear(str, ERRORSTR);
		str++;
	}
}

void	valid_double_numbers(t_stack *list)
{
	t_stack	*i;
	t_stack	*j;
	int		index;

	i = list;
	while (i->index == -1)
	{
		index = 0;
		j = i->next;
		while (j != i)
		{
			if (i->value == j->value)
				memclear(&list, ERRORLIST);
			if (j->value < i->value)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}

void	valid_order(t_stack **list)
{
	t_stack	*current;

	current = *list;
	while (current->next != *list)
	{
		if (current->value > current->next->value)
			return ;
		current = current->next;
	}
	memclear(*list, CLEARLIST);
	exit (0);
}
