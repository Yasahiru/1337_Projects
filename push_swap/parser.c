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
		printf("%d \n", head->value);
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

int	ft_arr_len(char**arr){
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
		if (ft_atoi(arr[i - 1]) < ft_atoi(arr[i])) // 1 2 3 => 3 2 1
			c++;
		i--;
	}
	if (c > 0)
		return (0);
	return (1);
}

void	ft_set_index(t_stack *head, char **arr)
{
	int	i;
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
// int main(){
// 	char **arr = ft_split(" 9 1 3 0 2", ' ');
// 	t_stack *head = create_stack_a(arr);
// 	ft_sort_value(arr);
// 	ft_set_index(head, arr);
// 	t_stack *node = head;
// 	while (node){
// 		printf(" %d[%d]", node->value, node->index);
// 		node = node->next;
// 	}
// }

int	ft_isvalid(int c)
{
	if (c != '-' && c != '+')
	{
		if (c >= '0' && c <= '9')
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	**numbers;
	t_stack	*head;

	char *(joined_args), *(temp);
	if (ac < 3)
		return (0);
	if (av[1][0] == '\0' || !ft_isvalid(av[0][1]))
		return (write(2, "Error\n", 6), 0);
	joined_args = NULL;
	temp = NULL;
	head = NULL;
	while (ac > 0)
	{
		temp = ft_strjoin(joined_args, av[ac]);
		free(joined_args);
		joined_args = ft_strjoin(temp, " ");
		free(temp);
		ac--;
	}
	numbers = ft_split(joined_args, ' ');
	free(joined_args);
	if (ft_is_sorted(numbers))
		return (0);
	if (check_arr(numbers))
		head = create_stack_a(numbers);
	free_arr(numbers);
	show_arr(head);
	ft_free(head);
}


// 95:57:47:33:A2:38