/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:12:12 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/08 19:22:41 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_inputs(char **args)
{
	char	*str;

	while (*args)
	{
		if (valid_str(*args))
			return (1);
		++args;
	}
	str = ft_rsplit(args, ' ');

	return (0);
}

int	valid_str(char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || (*str == ' ')))
			return (1);
		str++;
	}
	return (0);
}
