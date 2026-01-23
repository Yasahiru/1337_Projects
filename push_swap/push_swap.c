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

void	ft_push_max(t_stack **a, t_stack **b)
{
	int		max;
	int		pos;
	int		i;
	t_stack	*node;

	i = 1;
	max = -2147483648;
	pos = 0;
	node = *a;
	while (node)
	{
		if (max < node->value)
			max = node->value;
		node = node->next;
	}
	while (*a)
	{
		if ((*a)->value == max)
		{
			pb(a, b);
			return ;
		}
		ra(a);
	}
}