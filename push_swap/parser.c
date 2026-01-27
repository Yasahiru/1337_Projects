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
	int	i;
	int	x;
	int	bite;
	int	size;

	i = 0;
	x = convert_base_2(ft_find_max(a));
	bite = 0;
	ft_give_index(a);
	while (bite < x)
	{
		i = 0;
		size = ft_lstsize(*a);
		while (i < size)
		{
			if (((*a)->index) >> bite & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		ft_fill_stack_a(a, b);
		bite++;
	}
}

int main(){
	t_stack *a = create_stack_a(ft_split("2 1 3 0 9 -4", ' '));
	t_stack *b = NULL;
	ft_final_sort(&a, &b);
	// show_arr(a);
}

// 95:57:47:33:A2:38

// python3 -m c_formatter_42 ex*/*
// python3 -m pip install c-formatter-42