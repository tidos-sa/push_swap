/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:22:13 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/14 22:22:20 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_lowers(t_stack *stack)

{
	int min;
	int i;

	min = stack->a[0];
	i = 1;
	while (i < stack->len_a)
	{
		if (stack->a[i] < min)
		{
			min = stack->a[i];
			stack->index = i;
		}
		i++;
	}
	return (min);
}

void	sort_five(t_stack *stack)

{
	int small;
	int i;

	while (stack->len_a > 3)
	{
		small = find_lowers(stack);
		i = 0;
		i++;
		if (stack->a[0] != small)
		{
			while (stack->index > 0)
			{
				if (stack->a[0] == small || stack->index >= 5)
					break ;
				if (stack->index <= 2 && stack->index > 0)
				{
					ra(stack, 0);
					stack->index--;
				}
				else
				{
					rra(stack, 0);
					stack->index++;
				}
				if (stack->a[0] == small)
					break ;
			}
		}
		pb(stack, 0);
	}
	sort_three(stack);
	pa(stack, 0);
	pa(stack, 0);
}