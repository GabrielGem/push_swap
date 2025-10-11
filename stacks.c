/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:26:46 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/10 16:53:03 by gabrgarc         ###   ########.fr       */
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
		while (!ft_isdigit(*str))
			str++;
		value = ft_atoi(str);
		temp = new_node(value);
		while (ft_isdigit(*str))
			str++;
		addnode_back(&list, temp);
	}
	temp = NULL;
	return (list);
}

t_lst	*new_node(int value)
{
	t_lst	*new_node;

	new_node = malloc(1 * sizeof(t_lst));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	addnode_back(t_lst **lst, t_lst *new)
{
	t_lst	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

void	lstclear(t_lst **lst, void (*del)(void *))
{
	t_lst	*temp_node;

	if (!*lst || !lst || !del)
		return ;
	temp_node = *lst;
	while (temp_node != NULL)
	{
		*lst = temp_node->next;
		free(temp_node);
		temp_node = *lst;
	}
	*lst = NULL;
}
