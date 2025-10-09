/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/09 19:28:11 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_list(char *str)
{
	t_stack	*list;
	t_stack	*temp;

	while (*str)
	{
		while (!ft_isdigit(*str))
			str++;
		temp = ft_lstnew();
		temp->value = ft_atoi(str);
		while (ft_isdigit(*str))
			str++;
		ft_lstadd_back(&list, temp);
	}
	return (list);
}
