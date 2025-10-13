/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:26:58 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/13 11:03:41 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	memclear(void *adress, int option)
{
	if (option == CLEARSTR || option == ERRORSTR)
		free(adress);
	if (option == CLEARLIST || option == ERRORLIST)
		lstclear((t_lst **)&adress, free);
	if (option == ERRORSTR || option == ERRORLIST)
		error_message();
}

void	error_message(void)
{
	write(1, "Error\n", 6);
	exit (0);
}
