/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:58:10 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/03 20:06:34 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moviments(t_lst **stack, t_lst **stackb)
{
	sa(stack);
	print_list(stack, stackb);
	ra(stack);
	print_list(stack, stackb);
	rra(stack);
	print_list(stack, stackb);
	pb(stack, stackb);
	print_list(stack, stackb);
	pb(stack, stackb);
	print_list(stack, stackb);
	rb(stackb);
	print_list(stack, stackb);
}

void	print_list(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*current_a = stack_a ? *stack_a : NULL;
	t_lst	*current_b = stack_b ? *stack_b : NULL;

	while (current_a || current_b)
	{
		if (current_a)
		{
			printf("%d\t", current_a->index);
			current_a = current_a->next;
			if (current_a == *stack_a)
				current_a = NULL;
		}
		else
			printf("\t");
		if (current_b)
		{
			printf("%d", current_b->index);
			current_b = current_b->next;
			if (current_b == *stack_b)
				current_b = NULL;
		}
		printf("\n");
	}
	printf("-\t-\n");
	printf("A\tB\n");
	printf("\n");
}
