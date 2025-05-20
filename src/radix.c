/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:59:59 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/15 00:17:31 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all(t_stack *stack)

{
	free(stack->a);
	free(stack->b);
	free(stack->c);
}

void	insert_index(t_stack *stack)

{
	int i;
	int j;

	i = 0;
	while (i < stack->len_a)
	{
		j = 0;
		while (j < stack->len_a)
		{
			if (stack->a[i] == stack->c[j])
			{
				stack->a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

static int	ft_max_bytes(t_stack *stack)

{
	int size;
	int bytes;

	size = stack->len_a;
	bytes = 0;
	while ((1 << bytes) < size)
		bytes++;
	return (bytes);
}

void	radix(t_stack *stack)

{
	int i;
	int j;
	int size;
	int bytes;

	bytes = ft_max_bytes(stack);
	i = 0;
	size = stack->len_a;
	bubble_sort(stack->len_a, stack->c);
	insert_index(stack);
	while (ft_isorder(stack) != 1 && i != bytes)
	{
		j = 0;
		while (j < size)
		{
			if ((((stack->a[0] >> i) & 1) == 1))
				ra(stack, 0);
			else
				pb(stack, 0);
			j++;
		}
		while (stack->len_b > 0)
			pa(stack, 0);
		i++;
	}
}