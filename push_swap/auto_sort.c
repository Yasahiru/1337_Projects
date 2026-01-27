/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:44:22 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/23 15:44:23 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_auto_2(t_stack **stack_a)
{
	sa(stack_a);
}

void	ft_sort_3(t_stack *first, t_stack *second, t_stack *third,
		t_stack **stack_a)
{
	if (first->value < second->value && second->value < third->value
		&& third->value > first->value)
		return ;
	if (first->value > second->value && first->value > third->value)
	{
		if (second->value > third->value)
		{
			ra(stack_a);
			sa(stack_a);
		}
		else
			ra(stack_a);
	}
	else if (second->value > first->value && second->value > third->value)
	{
		if (first->value > third->value)
			rra(stack_a);
		else
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	else if (third->value > second->value && third->value > first->value)
		sa(stack_a);
}

void	ft_auto_3(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *stack_a;
	second = first->next;
	third = second->next;
	ft_sort_3(first, second, third, stack_a);
}

void	ft_auto_4(t_stack **a, t_stack **b)
{
	ft_push_max(a, b);
	ft_auto_3(a);
	pa(a, b);
	ra(a);
}

void	ft_auto_5(t_stack **a, t_stack **b)
{
	ft_push_max(a, b);
	ft_auto_4(a, b);
	pa(a, b);
	ra(a);
}
