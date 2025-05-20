/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:21:50 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/14 22:21:53 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack *stack)

{
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[0] < stack->a[2])
		sa(stack->a, 0);
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
			&& stack->a[0] > stack->a[2])
		rra(stack, 0);
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
			&& stack->a[1] < stack->a[2])
		ra(stack, 0);
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
			&& stack->a[1] > stack->a[2])
	{
		sa(stack->a, 0);
		rra(stack, 0);
	}
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
			&& stack->a[2] > stack->a[0])
	{
		rra(stack, 0);
		sa(stack->a, 0);
	}
}

void	sort_three_b(t_stack *stack)

{
	if (stack->b[0] > stack->b[1] && stack->b[1] < stack->b[2]
		&& stack->b[0] < stack->b[2])
		sb(stack->b, 0);
	else if (stack->b[0] < stack->b[1] && stack->b[1] > stack->b[2]
			&& stack->b[0] > stack->b[2])
		rrb(stack, 0);
	else if (stack->b[0] > stack->b[1] && stack->b[0] > stack->b[2]
			&& stack->b[1] < stack->b[2])
		rb(stack, 0);
	else if (stack->b[0] > stack->b[1] && stack->b[0] > stack->b[2]
			&& stack->b[1] > stack->b[2])
	{
		sb(stack->b, 0);
		rrb(stack, 0);
	}
	else if (stack->b[0] < stack->b[1] && stack->b[1] > stack->b[2]
			&& stack->b[2] > stack->b[0])
	{
		rrb(stack, 0);
		sb(stack->b, 0);
	}
}