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

void display_b(t_stack *b)
{
	while (b)
	{
		printf("%d ", b->value);
		b = b->next;
	}
}

void	ft_sort(t_stack *a, size_t size)
{
	size_t	start;
	size_t	end;
	t_stack	*node;
	t_stack	*stack_b;
	// char **arr2 = ft_split("0", ' ');
	// t_stack *stack_b = create_stack_a(arr2);

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
			start++;
			end++;
			display_b(stack_b);
			printf("\n");
		}
		else if (node->index <= end) // !check later
		{
			pb(a, &stack_b);
			start++;
			end++;
		}
		else
			rra(a);
	}
}

// int main(){
// 	char **arr = ft_split("4 2 1 3 6 10 9 8 7", ' ');
// 	char **arr2 = ft_split("2", ' ');
// 	t_stack *stack_b = create_stack_a(arr2);
// 	t_stack *stack_a = create_stack_a(arr);
// 	pb(stack_a, stack_b);
// }

// int main(){
// 	char **arr = ft_split("4 2 1 3 6 10 9 8 7", ' ');
// 	t_stack *head = create_stack_a(arr);

	// t_stack *node = head;
	// while (node->next){
	// 	printf("%d->", node->value);
	// 	node = node->next;
	// }
	// printf("%d->", node->value);

	// printf("sort");
	// ft_sort(head, 9);
	// node = head;
	// while (node->next){
	// 	printf("%d->", node->value);
	// 	node = node->next;
	// }
	// printf("%d->", node->value);
// }

// static void	ft_sort(t_stack *stack_a,t_stack *stack_b){
//
// }

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
