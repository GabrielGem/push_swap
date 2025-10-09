/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:11 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/09 20:39:23 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*str;

	if (argc < 2)
		return (0);
	if (argc > 2)
	{
		valid_inputs(++argv);
		str = ft_rsplit(args, ' ');
	}
	if (!str)
		str = argv[1];
	create_stack(str);
	write(1, "Ok\n", 3);
	return (1);
}
