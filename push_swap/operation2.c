/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:30:41 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/04 13:30:44 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack **b)
{
	t_stack	*last_node_a;
	t_stack	*node;

	if (!a)
	{
		printf("a is null");
		return ;
	}
	if (!*b || !b)
	{
		last_node_a = ft_lstlast(a);
		node = last_node_a->previous;
		node->next = NULL;
		*b = ft_lstnew(last_node_a->value);
		write(1, "pb\n", 3);
		return ;
	}
	last_node_a = ft_lstlast(a);
	node = last_node_a->previous;
	node->next = NULL;
	last_node_a->next = NULL;
	ft_lstlast(*b)->next = last_node_a;
	write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*last_node_b;
	t_stack	*node;

	if (!*b || !b || !a)
	{
		write(1, "\npa\n", 4);
		return ;
	}
	last_node_b = ft_lstlast(*b);
	if (last_node_b->previous)
	{
		node = last_node_b->previous;
		node->next = NULL;
		ft_lstlast(*a)->next = last_node_b;
		last_node_b->next = NULL;
	}
	else
	{
		ft_lstlast(*a)->next = last_node_b;
		last_node_b->next = NULL;
		*b = NULL;
	}
	write(1, "pa\n", 3);
}
