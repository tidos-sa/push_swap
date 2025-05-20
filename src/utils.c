/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 04:57:06 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/15 19:56:04 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	search_median(int *stack, int len)

{
	return ((min(stack, len) + max(stack, len)) / 2);
}

void	init_stack(t_stack *stack, char **argv)

{
	stack->b = (int *)malloc(sizeof(int) * (stack->len_a + 1));
	stack->c = create_array(stack->len_a, argv);
	stack->len_b = 0;
	stack->index = 0;
}

int	max(int *stack, int len)

{
	int max;
	int i;

	max = stack[0];
	i = 0;
	while (++i < len)
		if (stack[i] > max)
			max = stack[i];
	return (max);
}

int	min(int *stack, int len)

{
	int min;
	int i;

	min = stack[0];
	i = 0;
	while (++i < len)
		if (stack[i] < min)
			min = stack[i];
	return (min);
}

void	error_msg(int fd)

{
	ft_putendl_fd("Error", fd);
	exit(1);
}