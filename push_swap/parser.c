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

void ft_free(t_list *lst)
{
    if (lst)
    {
        ft_free(lst->next);
        free(lst);
    }
}

int	main(int ac, char **av)
{
	int		i;
	char	**numbers;
	t_list	*head;

	char *(joined_args), *(temp);
	if (ac <= 1 || av[1][0] == '\0')
		return (write(2, "Error\n", 6), 0);
	i = 1;
	joined_args = NULL;
	temp = NULL;
	head = NULL;
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
	if (check_arr(numbers))
		head = creat_stack_a(numbers);
	free_arr(numbers);
	show_arr(head);
	ft_free(head);
}
