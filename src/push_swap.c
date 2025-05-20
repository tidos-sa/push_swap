/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 03:14:16 by tidos-sa          #+#    #+#             */
/*   Updated: 2025/05/15 20:41:20 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*create_array(int argc, char **argv)

{
	int *array;
	int i;
	int j;

	i = 0;
	j = 1;
	array = (int *)malloc(sizeof(int) * (argc - 1));
	if (!array)
		return (NULL);
	while (--argc >= 0)
		array[i++] = ft_atoi(argv[j++]);
	return (array);
}

int	main(int argc, char **argv)

{
	t_stack stack;

	if (argc >= 3)
	{
		only_number(argv);
		stack.len_a = argc - 1;
		stack.a = create_array(stack.len_a, argv);
		if (checker_array(&stack) == 1)
			return (0);
		init_stack(&stack, argv);
		all_sort(&stack);
	}
	return (0);
}