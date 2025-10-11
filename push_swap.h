/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:33 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/11 14:10:08 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct	s_lst
{
	int				value;
	struct s_lst	*next;
}	t_lst;

int	main(int argc, char **argv);

// validations
void	valid_args(char **args, char **str);
void	valid_str(char *str);
void	valid_numbers(t_lst **list);
void	valid_list(t_lst **list);
t_lst	*create_list(char *str);
t_lst	*new_node(int content);
void	addnode_back(t_lst **lst, t_lst *new);
void	lstclear(t_lst **lst, void (*del)(void *));

#endif
