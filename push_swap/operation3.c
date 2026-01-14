/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:14:48 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/09 15:14:50 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	int		tmp;
	t_stack	*previous_node;
	t_stack	*last_node;

	last_node = ft_lstlast(a);
	while (last_node->previous)
	{
		previous_node = last_node->previous;
		tmp = previous_node->value;
		previous_node->value = last_node->value;
		last_node->value = tmp;
		last_node = last_node->previous;
	}
	write(1, "rra\n", 3);
}

void	rrb(t_stack *a)
{
	int		tmp;
	t_stack	*previous_node;
	t_stack	*last_node;

	last_node = ft_lstlast(a);
	while (last_node->previous)
	{
		previous_node = last_node->previous;
		tmp = previous_node->value;
		previous_node->value = last_node->value;
		last_node->value = tmp;
		last_node = last_node->previous;
	}
	write(1, "rrb\n", 3);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(3, "rrr\n", 1);
}
