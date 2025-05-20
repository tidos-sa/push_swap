/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:14:43 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/14 22:15:31 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *stack_a, int valid)

{
	int aux;

	aux = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = aux;
	if (valid == 0)
		ft_putendl_fd("sa", 1);
}

void	ra(t_stack *stack, int valid)

{
	int aux;
	int min;

	min = 0;
	aux = stack->a[0];
	while (++min < stack->len_a)
		stack->a[min - 1] = stack->a[min];
	stack->a[min - 1] = aux;
	if (valid == 0)
		ft_putendl_fd("ra", 1);
}

void	rra(t_stack *stack, int valid)

{
	int aux;
	int max;

	max = stack->len_a - 1;
	aux = stack->a[max];
	while (--max >= 0)
		stack->a[max + 1] = stack->a[max];
	stack->a[0] = aux;
	if (valid == 0)
		ft_putendl_fd("rra", 1);
}

void	pa(t_stack *stack, int valid)

{
	int i;

	if (stack->len_b == 0)
		return ;
	i = stack->len_a + 1;
	while (--i > 0)
		stack->a[i] = stack->a[i - 1];
	stack->a[0] = stack->b[0];
	i = 0;
	while (i++ < stack->len_b)
		stack->b[i - 1] = stack->b[i];
	stack->len_a++;
	stack->len_b--;
	if (valid == 0)
		ft_putendl_fd("pa", 1);
}