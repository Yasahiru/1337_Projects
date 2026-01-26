/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 16:07:25 by hloutman          #+#    #+#             */
/*   Updated: 2025/12/31 23:01:04 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_arr(t_stack *head)
{
	while (head)
	{
		if (!(head->next))
		{
			printf(" %d[%d]", head->value, head->index);
			return ;
		}
		printf(" %d[%d]", head->value, head->index);
		head = head->next;
	}
}

void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_free(t_stack *lst)
{
	if (lst)
	{
		ft_free(lst->next);
		free(lst);
	}
}

void	ft_auto_sort(int len, t_stack **a, t_stack **b)
{
	if (len == 2)
		ft_auto_2(a);
	else if (len == 3)
		ft_auto_3(a);
	else if (len == 4)
		ft_auto_4(a, b);
	else if (len == 5)
		ft_auto_5(a, b);
}

void	ft_fill_stack_a(t_stack **a, t_stack **b)
{
	while ((*b))
		pa(a, b);
}

void	ft_final_sort(t_stack **a, t_stack **b)
{
	int i;
	int x;
	int bite;
	int size;

	i = 0;
	x = convert_base_2(ft_find_max(a));
	bite = 0;
	
	while (bite < x)
	{
		i = 0;
		size = ft_lstsize(*a);
		while (i < size)
		{
			if (((*a)->value) >> bite & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		ft_fill_stack_a(a, b);
		bite++;
	}
}


// 95:57:47:33:A2:38