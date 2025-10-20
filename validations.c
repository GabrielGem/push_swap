/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:12:12 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/13 19:25:36 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*validations(char **args)
{
	t_lst	*list;
	char	*str;

	str = ft_rsplit(args, ' ');
	valid_str(str);
	list = create_list(str);
	memclear(str, CLEARSTR);
	valid_double_numbers(&list);
	valid_order(&list);
	return (list);
}

void	valid_str(char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || (*str == ' ')))
			memclear(str, ERRORSTR);
		str++;
	}
}

void	valid_double_numbers(t_lst **list)
{
	t_lst	*temp;
	t_lst	*temp2;

	temp = *list;
	while (temp->next != *list)
	{
		temp2 = temp->next;
		while (temp2->next != temp)
		{
			if (temp->value == temp2->value)
				memclear(*list, ERRORLIST);
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

void	valid_order(t_lst **list)
{
	t_lst	*current;

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
