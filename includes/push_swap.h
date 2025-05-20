/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:57:25 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/15 00:04:30 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../utils/libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# define MIN_RUN 32

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	*c;
	int	len_a;
	int	len_b;
	int	index;
}		t_stack;

void	init_stack(t_stack *stack, char **argv);
void	ss(t_stack *stack);
void	sb(int *stack_b, int valid);
void	sa(int *stack_a, int valid);
void	ra(t_stack *stack, int valid);
void	rra(t_stack *stack, int valid);
void	rb(t_stack *stack, int valid);
void	rrb(t_stack *stack, int valid);
void	pa(t_stack *stack, int valid);
void	pb(t_stack *stack, int valid);
void	sort_three(t_stack *stack);
void	rr(t_stack *stack);
void	error_msg(int fd);
void	sort_five(t_stack *stack);
void	all_sort(t_stack *stack);
void	bubble_sort(int len, int *array);
int		only_number(char **argv);
int		*create_array(int argc, char **argv);
int		has_duplicate(t_stack *stack);
int		ft_isorder(t_stack *stack);
int		checker_array(t_stack *stack);
int		find_lowers(t_stack *stack);
void	radix(t_stack *stack);
void	free_all(t_stack *stack);

int		min(int *stack, int len);
int		max(int *stack, int len);
#endif