/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:11:58 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/14 22:14:07 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	bubble_sort(int len, int *array)

{
	int i;
	int j;
	int swap;
	int step = 0;

	i = 0;
	while (++i < len)
	{
		j = -1;
		while (++j < len - 1)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				step++;
			}
		}
	}
}