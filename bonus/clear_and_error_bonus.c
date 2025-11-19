/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_and_error_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:26:58 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:25:56 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	error_message(void);

void	memclear(void *adress, int option)
{
	if (option == ERRORSTR)
		free(adress);
	if (option == ERRORLIST)
		stack_clear((t_stack **)&adress, free);
	error_message();
}

void	invalid_operation(t_orch *stacks, char *str)
{
	stack_clear(&stacks->a, free);
	stack_clear(&stacks->b, free);
	free(str);
	error_message();
}

static void	error_message(void)
{
	write(2, "Error\n", 6);
	exit (0);
}
