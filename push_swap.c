/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:11 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/11 20:18:36 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_orch	info;

	if (argc < 2)
		return (0);
	info = (t_orch){.a = NULL, .b = NULL, .moves = NULL};
	info.a = validations(&argv[1]);
	print_list(&info);
	sort_three_numbers(&info);
	print_list(&info);
	ft_lstitermoves(info.moves, printf);
	clear_list(&info);
	return (1);
}

void	clear_list(t_orch *info)
{
	lstclear(&info->a, free);
	lstclear(&info->b, free);
	movelstclear(&info->moves, free);
}
