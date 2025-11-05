/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:58:10 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/04 19:19:31 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moviments(t_stack **a, t_stack **b)
{
	sa(a);
	print_list(a, b);
	ra(a);
	print_list(a, b);
	rra(a);
	print_list(a, b);
	pb(a, b);
	print_list(a, b);
	pb(a, b);
	print_list(a, b);
	rb(b);
	print_list(a, b);
}

void	print_list(t_stack **a, t_stack **b)
{
	t_stack *list_a = a ? *a : NULL;
	t_stack *list_b = b ? *b : NULL;

	while (list_a || list_b)
	{
		if (list_a)
		{
			printf("%d\t", list_a->index);
			list_a = list_a->next;
			if (list_a == *a)
				list_a = NULL;
		}
		else
			printf("\t");
		if (list_b)
		{
			printf("%d", list_b->index);
			list_b = list_b->next;
			if (list_b == *b)
				list_b = NULL;
		}
		printf("\n");
	}
	printf("-\t-\n");
	printf("A\tB\n");
	printf("\n");
}
