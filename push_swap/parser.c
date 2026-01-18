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
		printf("%d [%d]\n", head->value, head->index);
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

// int	main(int ac, char **av)
// {
// 	char	**numbers;
// 	t_stack	*head;

// 	char *(joined_args), *(temp);
// 	if (ac < 3)
// 		return (0);
// 	if (av[1][0] == '\0' || !ft_isvalid(av[0][1]))
// 		return (write(2, "Error\n", 6), 0);
// 	joined_args = NULL;
// 	temp = NULL;
// 	head = NULL;
// 	while (ac > 0)
// 	{
// 		temp = ft_strjoin(joined_args, av[ac]);
// 		free(joined_args);
// 		joined_args = ft_strjoin(temp, " ");
// 		free(temp);
// 		ac--;
// 	}
// 	numbers = ft_split(joined_args, ' ');
// 	free(joined_args);
// 	if (ft_is_sorted(numbers))
// 		return (0);
// 	if (check_arr(numbers))
// 		head = create_stack_a(numbers);
// 	free_arr(numbers);
// 	show_arr(head);
// 	ft_free(head);
// }


// 95:57:47:33:A2:38