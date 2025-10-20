/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moviments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:48:36 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/14 12:07:42 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moviments(t_lst **stack, t_lst **stackb)
{
	//swap(stack);
	rotate(stack);
	//rrotate(stack);
	push(stack, stackb);
}

void	push(t_lst **stack, t_lst **stackb)
{
	t_lst	*temp;

	temp = lstdetach_first(stack);
	addnode_front(stackb, temp);
}

void	rrotate(t_lst **stack)
{
	t_lst	*last;

	last = *stack;
	while (last->next != *stack)
		last = last->next;
	*stack = last;
}

void	rotate(t_lst **stack)
{
	*stack = (*stack)->next;
}

void	swap(t_lst **stack)
{
	t_lst	*swap;
	t_lst	*last;

	last = *stack;
	while (last->next != *stack)
		last = last->next;
	swap = (*stack)->next;
	last->next = swap;
	(*stack)->next = swap->next;
	swap->next = *stack;
	*stack = swap;
}
/*
void	print_list(t_lst **stack, t_lst **stackb)
{
	t_lst	*current;
	t_lst	*currentb;

	if ((*stack))
	{
		printf("%d", (*stack)->value);
		current = (*stack)->next;
	}
	if ((*stackb))
	{
		printf("%d", (*stackb)->value);
		currentb = (*stackb)->next;
	}
	while (current != *stack || currentb != *stackb)
	{
		if (current)
		{
			printf("%d\t", current->value);
			current = current->next;
		}
		if (currentb)
		{
			printf("%d", currentb->value);
			currentb = currentb->next;
		}
		printf("\n");
	}
	printf("A\t");
	printf("B\n");
}
*/

void print_list(t_lst **stack_a, t_lst **stack_b)
{
    // Start traversal pointers at the beginning of each list.
    // We check for NULL lists from the start.
    t_lst *current_a = stack_a ? *stack_a : NULL;
    t_lst *current_b = stack_b ? *stack_b : NULL;

    // Loop until we have printed every element from both lists.
    while (current_a || current_b)
    {
        // --- Print Column A ---
        if (current_a)
        {
            printf("%d\t", current_a->value);
            current_a = current_a->next;
            // If we've circled back to the start, set to NULL to mark it as "done".
            if (current_a == *stack_a)
                current_a = NULL;
        }
        else // If list A is done, just print a tab for alignment.
        {
            printf("\t");
        }

        // --- Print Column B ---
        if (current_b)
        {
            printf("%d", current_b->value); // No tab needed after the last column.
            current_b = current_b->next;
            // If we've circled back to the start, set to NULL to mark it as "done".
            if (current_b == *stack_b)
                current_b = NULL;
        }

        // After printing one value from each (or spacing), go to the next line.
        printf("\n");
    }

    // Print the footer after the loop is finished.
    printf("-\t-\n");
    printf("A\tB\n");
}
