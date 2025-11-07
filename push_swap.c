/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:11 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/06 17:34:49 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_orch	info;

	if (argc < 2)
		return (0);
	info = init_info();
	info.a = validations(&argv[1]);
	print_list(&info);
	moviments(&info);
	lstclear(&info.a, free);
	if (info.b)
		lstclear(&info.b, free);
	return (1);
}

t_orch	init_info(void)
{
	t_orch	info;

	info.a = NULL;
	info.b = NULL;
	info.moves = NULL;
	return (info);
}
