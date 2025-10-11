/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:11 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/11 14:09:43 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*list;
	char	*str;

	if (argc < 2)
		return (0);//function than print "Error" and finish program
	str = NULL;
	valid_args(&argv[1], &str);
	list = create_list(str);
	free(str);
	valid_numbers(&list);
	valid_list(&list);
	lstclear(&list, free);
	write(1, "Ok\n", 3);
	return (1);
}
