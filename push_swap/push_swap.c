/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:33:35 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/07 16:33:37 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *a, int size)
{
	int	start;
	int	end;
	t_stack	*node;
	t_stack	*stack_b;

	start = 0;
	end = (size / 6 );
	node = a;
	stack_b = NULL;
	while (node)
	{
		if (node->index <= start)
		{
			pb(a, &stack_b);
			rb(stack_b);
			if (end <= size - 1)
				end++;
			start++;
		}
		else if (node->index <= end)
		{
			pb(a, &stack_b);
			start++;
			if (end <= size - 1)
				end++;
		}
		else
			rra(a);
	}
}

// t_stack	*push_swap(char *joined_args)
// {
// 	char	**numbers;
// 	t_stack	*stack_a;
// 	t_stack	*stack_b;
//
// 	stack_a = NULL;
// 	stack_b = NULL;
// 	numbers = ft_split(joined_args, ' ');
// 	free(joined_args);
// 	if (check_arr(numbers))
// 	{
// 		stack_a = create_stack_a(numbers);
// 		ft_sort(stack_a, stack_b);
// 	}
// 	free_arr(numbers);
// 	show_arr(stack_a);
// 	return (stack_a);
// }

// int main(){
// 	t_stack *head = create_stack_a(ft_split("1 2 3 4 5", ' '));
// 	ft_sort(head, 9);
// }