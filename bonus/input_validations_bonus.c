/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validations_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:12:12 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/19 13:52:59 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	valid_str(char *str);
static void	valid_double_numbers(t_stack *list);
static void	empty_arguments(char **args);

t_stack	*validations(char **args)
{
	char	*str;
	t_stack	*list;
	int		check;

	empty_arguments(args);
	str = ft_revsplit(args, ' ');
	valid_str(str);
	list = stack_create(str);
	free(str);
	valid_double_numbers(list);
	if (check)
	{
		stack_clear(&list, free);
		exit (0);
	}
	return (list);
}

static void	valid_str(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			number = 1;
		if (!(ft_isdigit(str[i]) || (str[i] == ' ') || ft_issignal(str[i])))
			memclear(str, ERRORSTR);
		if (ft_issignal(str[i]) && ft_issignal(str[i + 1]))
			memclear(str, ERRORSTR);
		if (ft_issignal(str[i]) && !ft_isdigit(str[i + 1]))
			memclear(str, ERRORSTR);
		i++;
	}
	if (!number)
		memclear(str, ERRORSTR);
}

static void	valid_double_numbers(t_stack *list)
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

static void	empty_arguments(char **args)
{
	while (*args)
	{
		if (**args == '\0')
			memclear(NULL, ERRORMSG);
		args++;
	}
}
