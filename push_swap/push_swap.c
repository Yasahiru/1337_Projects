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

void	ft_sort(t_stack **a,t_stack **stack_b, int size)
{
	int	start;
	int	end;
	t_stack	*node;

	start = 0;
	end = (size / 6 );
	node = *a;
	while (node)
	{
		if (node->index <= start)
		{
			pb(a, stack_b);
			if (end <= size - 1)
				end++;
			rb(stack_b);
			start++;
		}
		else if (node->index <= end)
		{
			pb(a, stack_b);
			if ((*stack_b)->next->value > (*stack_b)->value)
				sb(stack_b);
			start++;
			if (end <= size - 1)
				end++;
		}
		else
			ra(a);
		node = node->next;
	}
}

int	ft_find_max(t_stack *stack_b)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->index == i)
			return (stack_b->value);
		stack_b = stack_b->next;
		i++;
	}
	return (-1);
}

int	ft_max_position(t_stack *stack_b, int value)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->value == value)
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (-1);
}

void	ft_sort_2(t_stack *stack_a, t_stack *stack_b)
{
	int	max_position;
	int	max;
	int	size_b;

	max = ft_find_max(stack_b);
	max_position = ft_max_position(stack_b, max);
	size_b = ft_lstsize(stack_b);
	if (max_position < size_b / 2)
	{
		while (max_position--)
			rb(stack_b);
	}
	else if(max_position >= size_b / 2)
	{
		while (max_position++ <= size_b)
			rrb(stack_b);
	}
	pa(&stack_a, &stack_b);
}

// int main()
// {
// 	t_stack *head2 = create_stack_a(ft_split("3 1 2",' '));
// 	// t_stack *head2 = NULL;
// 	t_stack	*node = head2;
// 	while (node)
// 	{
// 		printf("%d[%d] \n", node->value,node->index);
// 		node = node->next;
// 	}
// 	// sa(&head2);2
// 	ra(&head2);
// 	// ft_sort(head, head2, 5);
// 	while (head2)
// 	{
// 		printf("%d[%d] \n", head2->value, head2->index);
// 		head2 = head2->next;
// 	}
// }
