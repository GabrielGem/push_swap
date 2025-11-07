/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:12:12 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/07 19:51:37 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*validations(char **args)
{
	char	*str;
	t_stack	*list;

	empty_arguments(args);
	str = ft_revsplit(args, ' ');
	valid_str(str);
	list = stack_list(str);
	memclear(str, CLEARSTR);
	valid_double_numbers(list);
	valid_order(list);
	return (list);
}

void	valid_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isdigit(str[i]) || (str[i] == ' ') || ft_issignal(str[i])))
			memclear(str, ERRORSTR);
		if (ft_issignal(str[i]) && ft_issignal(str[i + 1]))
			memclear(str, ERRORSTR);
		if (ft_issignal(str[i]) && !ft_isdigit(str[i + 1]))
			memclear(str, ERRORSTR);
		i++;
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
				memclear(list, ERRORLIST);
			if (j->value < i->value)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}

void	valid_order(t_stack *list)
{
	t_stack	*current;

	current = list;
	while (current->next != list)
	{
		if (current->value > current->next->value)
			return ;
		current = current->next;
	}
	memclear(list, CLEARLIST);
	exit (0);
}

void	empty_arguments(char **args)
{
	while (*args)
	{
		if (**args == '\0')
			memclear(NULL, ERRORMSG);
		args++;
	}
}
