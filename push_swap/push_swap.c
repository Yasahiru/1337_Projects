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

char	**is_args_valid(int ac, char **av)
{
	char	*joined_args;
	char	**numbers;
	char	*temp;
	int		i;
	int		args;

	joined_args = NULL;
	temp = NULL;
	i = 1;
	args = 0;
	while (i < ac)
	{
		temp = ft_strjoin(joined_args, av[i]);
		free(joined_args);
		joined_args = ft_strjoin(temp, " ");
		free(temp);
		i++;
	}
	numbers = ft_split(joined_args, ' ');
	free(joined_args);
	return (numbers);
}

int	main4(int ac, char **av)
{
	char	**numbers;
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	numbers = is_args_valid(ac, av);
	if (!numbers)
		return (0);
	if (check_arr(numbers))
		a = create_stack_a(numbers);
	if (ft_is_sorted(numbers))
		return (0);
	// if (ft_lstsize(a) <= 5)
	// 	ft_auto_sort(ft_lstsize(a), &a, &b);
	ft_final_sort(&a, &b);
	// free_arr(numbers);
	show_arr(a);
	ft_free(a);
	return (0);
}
