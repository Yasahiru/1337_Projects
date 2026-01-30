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

t_stack	*create_stack_a(char **arr)
{
	t_stack	*last_node;
	t_stack	*node;
	t_stack	*head;
	long	number;
	int		i;

	i = 0;
	head = NULL;
	number = ft_atoi(*arr);
	head = ft_lstnew(number);
	head->previous = NULL;
	arr++;
	while (*arr)
	{
		number = ft_atoi(*arr);
		node = ft_lstnew(number);
		last_node = ft_lstlast(head);
		node->previous = last_node;
		ft_lstadd_back(&head, node);
		arr++;
	}
	ft_give_index(&head);
	return (head);
}

int	is_repeated(t_stack **a, int number)
{
	t_stack	*node;
	int		count;

	count = 0;
	node = (*a);
	while (node)
	{
		if (node->value == number)
			count++;
		node = node->next;
	}
	if (count > 1)
		return (1);
	return (0);
}

int	is_overflow(long num)
{
	if (num > 2147483647 || num < -2147483648)
		return (1);
	return (0);
}

int	second_check(t_stack **a)
{
	t_stack	*node;

	node = (*a);
	while (node)
	{
		if (is_repeated(a, node->value))
			return (0);
		node = node->next;
	}
	return (1);
}


// void    radix_sort(t_stack a, t_stack b)
// {
//     int    biggest_nbr;
//     int    max_bits;
//     int    i;
//     int    j;

//     biggest_nbr = find_biggest(a);
//     max_bits = find_bits(biggest_nbr);
//     i = 0;
//     while (i < max_bits)
//     {
//         j = 0;
//         while (j <= biggest_nbr)
//         {
//             if (((a)->index >> i) & 1)
//                 ra (a);
//             else
//                 pb(a, b);
//             j++;
//         }
//         while (*b)
//             pa(a, b);
//         i++;
//     }
// }