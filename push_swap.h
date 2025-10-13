/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:57:33 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/10/12 12:33:31 by gabrgarc         ###   ########.fr       */
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

enum	e_options
{
	CLEAR,
	CLEARSTR,
	CLEARLIST,
	CLEARSTACK,
	ERROR,
	ERRORSTR,
	ERRORLIST,
	ERRORSTACK
};

int	main(int argc, char **argv);

// validations
t_lst	*validations(char **args);
void	valid_str(char *str);
void	valid_double_numbers(t_lst **list);
void	valid_order(t_lst **list);
// list
t_lst	*create_list(char *str);
t_lst	*new_node(int content);
void	addnode_back(t_lst **lst, t_lst *new);
void	lstclear(t_lst **lst, void (*del)(void *));
// clear and messages
void	memclear(void *adress, int option);
void	error_message(void);

#endif
