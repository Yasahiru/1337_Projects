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

void	ft_auto_3(t_stack **a, t_stack **b)
{
	pb(a, b);
	if ((*a)->value > (*a)->next->value)
		sa(a);
	if ((*a)->value > (*b)->value)
		pa(a, b);
	else if ((*a)->next->value < (*b)->value)
	{
		pa(a, b);
		rra(a);
	}
	else
	{
		pa(a, b);
		sa(a);
	}
}

void	ft_auto_4(t_stack **a, t_stack **b)
{
	ft_push_max(a, b);
	ft_auto_3(a, b);
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
