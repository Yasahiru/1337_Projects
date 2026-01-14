/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operration3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:14:48 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/09 15:14:50 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int		tmp;
	t_stack	*next_node;
	t_stack	*current_node;

	current_node = a;
	while (current_node->next)
	{
		next_node = current_node->next;
		tmp = next_node->value;
		next_node->value = current_node->value;
		current_node->value = tmp;
		current_node = current_node->next;
	}
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int		tmp;
	t_stack	*next_node;
	t_stack	*current_node;

	current_node = ft_lstlast(b);
	while (current_node->next)
	{
		next_node = current_node->next;
		tmp = next_node->value;
		next_node->value = current_node->value;
		current_node->value = tmp;
		current_node = current_node->next;
	}
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(3, "rr\n", 1);
}
