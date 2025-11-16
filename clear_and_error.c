/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:26:58 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/16 12:31:14 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error_message(void);

void	memclear(void *adress, int option)
{
	if (option == ERRORSTR)
		free(adress);
	if (option == ERRORLIST)
		stack_clear((t_stack **)&adress, free);
	error_message();
}

static void	error_message(void)
{
	write(1, "Error\n", 6);
	exit (0);
}
