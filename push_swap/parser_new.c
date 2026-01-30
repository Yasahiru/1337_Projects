/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:32:48 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/28 11:32:50 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(char **s)
{
	long	number;

	number = 0;
	int (i), (j);
	i = 0;
	while (s[i])
	{
		j = 0;
		if ((s[i][j] == '-' || s[i][j] == '+') && (s[i][j + 1] >= '0' && s[i][j
				+ 1] <= '9'))
			j++;
		while (s[i][j])
		{
			if (!(s[i][j] >= '0' && s[i][j] <= '9'))
				return (0);
			j++;
		}
		number = ft_atoi(s[i]);
		if (is_overflow(number))
			return (0);
		i++;
	}
	return (1);
}

int	is_args_valid(int ac, char **av)
{
	char	**number;
	int		i;

	i = 1;
	while (i < ac)
	{
		number = ft_split(av[i], ' ');
		if (!check(number))
			return (free_arr(number), 0);
		i++;
		free_arr(number);
	}
	return (1);
}

// int	is_args_valid(int ac, char **av, char **num)
// {
// 	char	**numbers;
// 	int		i;

// 	char	(*temp), (*joined_args);
// 	temp = NULL;
// 	i = 1;
// 	joined_args = NULL;
// 	while (i < ac)
// 	{
// 		temp = ft_strjoin(joined_args, av[i]);
// 		free(joined_args);
// 		joined_args = ft_strjoin(temp, " ");
// 		free(temp);
// 		i++;
// 	}
// 	i = 0;
// 	numbers = ft_split(joined_args, ' ');
// 	*num = *numbers;
// 	if (!check(numbers))
// 		return (0);
// 	return(1);
// }
