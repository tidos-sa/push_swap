/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:07:09 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/15 00:05:12 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	all_sort(t_stack *stack)

{
	if (stack->len_a == 2)
		sa(stack->a, 0);
	else if (stack->len_a == 3)
		sort_three(stack);
	else if (stack->len_a <= 5)
		sort_five(stack);
	else
		radix(stack);
	free_all(stack);
}