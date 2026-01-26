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

int	ft_arr_len(char **arr)
{
	int	i;

	i = 0;
	while (*arr)
	{
		i++;
		arr++;
	}
	return (i);
}

int	ft_is_sorted(char **arr)
{
	int	i;
	int	num1;
	int	num2;
	int	sort;

	i = 0;
	num1 = 0;
	num2 = 0;
	sort = 1;
	while (i < ft_arr_len(arr) - 1)
	{
		num1 = ft_atoi(arr[i]);
		num2 = ft_atoi(arr[i + 1]);
		if (num1 > num2)
			sort = 0;
		i++;
	}
	if (sort)
		return (1);
	return (0);
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
