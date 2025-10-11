/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:12:12 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/11 14:32:54 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_args(char **args, char **str)
{
	*str = ft_rsplit(args, ' ');
	valid_str(*str);
}

void	valid_str(char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || (*str == ' ')))
		{
			free(str);
			write(1, "Error\n", 6);
			exit (1);
		}
		str++;
	}
}

void	valid_numbers(t_lst **list)
{
	t_lst	*temp;
	t_lst	*temp2;

	temp = *list;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->value == temp2->value)
			{
				lstclear(list, free);
				write(1, "equals numbers\n", 14);
				exit (0); // clear list and exit;
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

void	valid_list(t_lst **list)
{
	t_lst	*temp;
	t_lst	*temp2;

	temp = *list;
	while (temp->next != NULL)
	{
		temp2 = temp->next;
		if (temp->value > temp2->value)
			return ;
		temp = temp->next;
	}
	write (1, "Ordered list\n", 13);
}
