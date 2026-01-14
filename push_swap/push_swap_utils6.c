/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils6.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:37:59 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/13 16:38:02 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_arr_len(char**arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	ft_is_sorted(char **arr)
{
	int	c;
	int	i;

	c = 0;
	i = ft_arr_len(arr) - 1;
	while (i > 0)
	{
		if (ft_atoi(arr[i - 1]) < ft_atoi(arr[i]))
			c++;
		i--;
	}
	if (c > 0)
		return (0);
	return (1);
}

void	ft_set_index(t_stack *head, char **arr)
{
	int		i;
	t_stack	*node;

	i = 0;
	while (arr[i])
	{
		node = ft_lstlast(head);
		while (node)
		{
			if (ft_atoi(arr[i]) == node->value)
				node->index = i;
			node = node->previous;
		}
		i++;
	}
}

int	ft_isvalid(int c)
{
	if (c != '-' && c != '+')
	{
		if (c >= '0' && c <= '9')
			return (0);
	}
	return (1);
}
