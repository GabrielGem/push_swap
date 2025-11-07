/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:58:10 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/06 17:26:07 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moviments(t_orch *info)
{
	sa(info);
	print_list(info);
	ra(info);
	print_list(info);
	rra(info);
	print_list(info);
	pb(info);
	print_list(info);
	pb(info);
	print_list(info);
	rb(info);
	print_list(info);
}

void	print_list(t_orch *info)
{
	t_stack *list_a;
	t_stack *list_b;

	list_a = info->a;
	list_b = info->b;
	while (list_a || list_b)
	{
		if (list_a)
		{
			printf("%d\t", list_a->index);
			list_a = list_a->next;
			if (list_a == info->a)
				list_a = NULL;
		}
		else
			printf("\t");
		if (list_b)
		{
			printf("%d", list_b->index);
			list_b = list_b->next;
			if (list_b == info->b)
				list_b = NULL;
		}
		printf("\n");
	}
	printf("-\t-\nA\tB\n\n");
}
