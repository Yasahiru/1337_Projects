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

#include <stdio.h>
#include "libft.h"
#include "push_swap.h"

// void ft_free(char *args, char **nums)
// {
// 	free(args);
// 	free(nums);
// }

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

int	main(int ac, char **av)
{
	int		i;
	char	**numbers;
	void	**head;

	char *(joined_args), *(temp);
	if (ac <= 1 || av[1][0] == '\0')
		return (write(2, "Error", 5), 0);
	i = 1;
	joined_args = NULL;
	temp = NULL;
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
		creat_stack_a(numbers);
	// printf("%d\n",check_arr(numbers));
	free_arr(numbers);
}

