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

void	clear_and_exit(char *str, char **arr, t_stack **stack)
{
	if (str)
		free(str);
	if (arr)
		free_arr(arr);
	if (stack)
		ft_lstclear(stack);
}

void	ft_exit(char *str, char **arr, t_stack **stack)
{
	clear_and_exit(str, arr, stack);
	write(2, "Error\n", 6);
	return ;
}

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

int	is_good(t_stack **a)
{
	if (!second_check(a))
		return (0);
	if (ft_is_sorted(a))
		return (1);
	return (2);
}

int	main33(int ac, char **av)
{
	t_stack (*a), (*b);
	if (ac < 2)
		return (write(2, "Error\n", 6), 0);
	b = NULL;
	if (!is_args_valid(ac, av))
		return (ft_exit(NULL, NULL, NULL), 0);
	av++;
	a = create_stack_a(av);
	if (is_good(&a) == 1)
		return (0);
	else if (is_good(&a) == 0)
		return (ft_exit(NULL, NULL, &a), 0);
	ft_auto_sort(ft_lstsize(a), &a, &b);
	clear_and_exit(NULL, NULL, &a);
	return (0);
}

// 100 under 1300
// 500 under 11500