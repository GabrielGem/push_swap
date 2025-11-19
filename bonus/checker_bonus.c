/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:09:19 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/18 17:23:36 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	look_the_moviment(char *str, t_orch *stacks);

int	main(int argc, char **argv)
{
	char	*move;
	t_orch	stacks;
	int		size_list;

	if (argc < 2)
		return (0);
	stacks = (t_orch){.a = NULL, .b = NULL};
	stacks.a = validations(&argv[1]);
	size_list = stack_size(stacks.a);
	while (TRUE)
	{
		move = get_next_line(0);
		if (!move)
			break ;
		look_the_moviment(move, &stacks);
		free(move);
	}
	if (valid_order(stacks.a)
		&& stack_size(stacks.a) == size_list)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	stack_clear((t_stack **)&stacks.a, free);
	stack_clear((t_stack **)&stacks.b, free);
	return (0);
}

static void	look_the_moviment(char *str, t_orch *stacks)
{
	if (!ft_strncmp("sa\n", str, 3))
		sa(stacks);
	else if (!ft_strncmp("sb\n", str, 3))
		sb(stacks);
	else if (!ft_strncmp("ss\n", str, 3))
		ss(stacks);
	else if (!ft_strncmp("pa\n", str, 3))
		pa(stacks);
	else if (!ft_strncmp("pb\n", str, 3))
		pb(stacks);
	else if (!ft_strncmp("ra\n", str, 3))
		ra(stacks);
	else if (!ft_strncmp("rb\n", str, 3))
		rb(stacks);
	else if (!ft_strncmp("rr\n", str, 3))
		rr(stacks);
	else if (!ft_strncmp("rra\n", str, 4))
		rra(stacks);
	else if (!ft_strncmp("rrb\n", str, 4))
		rrb(stacks);
	else if (!ft_strncmp("rrr\n", str, 4))
		rrr(stacks);
	else
		invalid_operation(stacks, str);
}
