/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:11 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/14 12:02:20 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*list;
	t_lst	*listb;

	if (argc < 2)
		return (0);
	list = validations(&argv[1]);
	listb = NULL;
	print_list(&list, &listb);
	moviments(&list, &listb);
	print_list(&list, &listb);
	lstclear(&list, free);
	return (1);
}
