/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:19:00 by hloutman          #+#    #+#             */
/*   Updated: 2025/12/31 15:19:02 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_value(char **arr)
{
	int		i;
	int		checker;
	char	*tmp;

	i = 0;
	checker = 1;
	while (checker)
	{
		checker = 0;
		i = 0;
		while (arr[i + 1])
		{
			if (ft_atoi(arr[i]) < ft_atoi(arr[i + 1]))
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				checker = 1;
			}
			i++;
		}
	}
}

t_stack	*create_stack_a(char **arr)
{
	long	i;
	int		number;
	t_stack	*head;
	t_stack	*node;
	t_stack	*last_node;

	i = 0;
	// ft_sort_value(arr);
	head = NULL;
	number = ft_atoi(arr[i]);
	head = ft_lstnew(number);
	head->previous = NULL;
	head->index = i;
	i++;
	while (arr[i])
	{
		number = ft_atoi(arr[i]);
		node = ft_lstnew(number);
		last_node = ft_lstlast(head);
		node->previous = last_node;
		node->index = i++;
		ft_lstadd_back(&head, node);
	}
	return (head);
}

int	is_number(char *str)
{
	int (i);
	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_repeated(char **arr, char *numbre)
{
	int (i), (count);
	long (number), (arr_num);
	arr_num = 0;
	count = 0;
	number = 0;
	number = ft_atoi(numbre);
	if (number > 2147483647 || number < -2147483648)
		return (0);
	i = 0;
	while (arr[i])
	{
		arr_num = ft_atoi(arr[i]);
		if (arr_num > 2147483647 || arr_num < -2147483648)
			return (0);
		if (arr_num == number)
			count++;
		i++;
	}
	if (count > 1)
		return (0);
	return (1);
}

int	is_multiple_signs(char *str)
{
	int (i), (count);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			count++;
		i++;
	}
	if (count > 1)
		return (0);
	return (1);
}

int	check_arr(char **arr)
{
	int (i), (checker);
	i = 0;
	checker = 0;
	while (arr[i])
	{
		if (!is_repeated(arr, arr[i]))
			checker++;
		if (checker > 0)
			return (write(2, "Error\n", 6), 0);
		if ((!is_number(arr[i]) || !is_multiple_signs(arr[i])))
			return (write(2, "Error\n", 6), 0);
		i++;
	}
	return (1);
}
