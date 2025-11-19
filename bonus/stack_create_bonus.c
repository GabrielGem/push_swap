/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/19 14:34:29 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	convert_str_to_int(char	*str, t_stack **list, char *init_str);

t_stack	*stack_create(char *str)
{
	t_stack	*list;
	t_stack	*temp;
	int		value;
	int		i;

	list = NULL;
	i = 0;
	while (str[i])
	{
		while (str[i] && !(ft_isdigit(str[i]) || ft_issignal(str[i])))
			i++;
		if (!str[i])
			break ;
		value = convert_str_to_int(&str[i], &list, str);
		temp = stack_new_node(value);
		while (str[i] && (ft_isdigit(str[i]) || ft_issignal(str[i])))
			i++;
		stack_add_back(&list, temp);
	}
	return (list);
}

static int	convert_str_to_int(char	*str, t_stack **list, char *init_str)
{
	long	number;
	int		sign;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	number = 0;
	sign = 1;
	if (ft_issignal(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (number > MAX_INT / 10
			|| (((number * 10) + (*str - '0')) * -1) < MIN_INT)
		{
			free(init_str);
			memclear(*list, ERRORLIST);
		}
		number = (number * 10) + (*str - '0');
		str++;
	}
	return ((int)(number * sign));
}
