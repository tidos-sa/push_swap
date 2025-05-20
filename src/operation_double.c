/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:20:17 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/14 22:20:21 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(t_stack *stack)

{
	sa(stack->a, 1);
	sb(stack->b, 1);
	ft_putendl_fd("ss", 1);
}

void	rr(t_stack *stack)

{
	ra(stack, 1);
	rb(stack, 1);
	ft_putendl_fd("rr", 1);
}

void	rrr(t_stack *stack)

{
	rra(stack, 1);
	rrb(stack, 1);
	ft_putendl_fd("rrr", 1);
}