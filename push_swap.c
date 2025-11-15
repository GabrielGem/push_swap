/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:11 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/14 17:06:25 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_orch	stacks;

	if (argc < 2)
		return (0);
	stacks = (t_orch){.a = NULL, .b = NULL, .moves = NULL};
	stacks.a = validations(&argv[1]);
	turk(&stacks);
	ft_lstitermoves(stacks.moves, printf);
	clear_list(&stacks);
	return (1);
}
