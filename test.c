/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:05:22 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/11/02 20:00:16 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	insertion_sort(int *array, int len);
void	print_array(int *array, int len);

enum e_index
{
	I,
	J
};

int	main(void)
{
	int	len;
	int	array[10] = {6, 3, 7, 8, 9, 5, 0, 1, 2, 4};

	len = 10;
	print_array(array, len);
	insertion_sort(array, len);
	print_array(array, len);
	return (0);
}

void	print_array(int *array, int len)
{
	int	i;

	i = 0;
	while (i < len)
		printf("%d ", array[i++]);
	printf("\n");
}

void	insertion_sort(int *array, int len)
{
	int	index[2];
	int	temp;

	index[J] = 1;
	while (index[J] < len)
	{
		temp = array[index[J]];
		index[I] = index[J] - 1;
		while (index[I] >= 0 && array[index[I]] > temp)
		{
			array[index[I] + 1] = array[index[I]];
			--index[I];
		}
		array[index[I] + 1] = temp;
		++index[J];
	}
}
