/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:14:48 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/09 15:14:50 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int		tmp;

	t_stack (*last_node), (*previous_node);
	last_node = ft_lstlast(a);
	while (last_node->previous)
	{
		previous_node = last_node->previous;
		tmp = previous_node->value;
		previous_node->value = last_node->value;
		last_node->value = tmp;
		last_node = last_node->previous;
	}
	write(1, "ra\n", 3);	
}

void	rb(t_stack *a)
{
	int		tmp;

	t_stack (*last_node), (*previous_node);
	last_node = ft_lstlast(a);
	while (last_node->previous)
	{
		previous_node = last_node->previous;
		tmp = previous_node->value;
		previous_node->value = last_node->value;
		last_node->value = tmp;
		last_node = last_node->previous;
	}
	write(1, "ra\n", 3);	
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(3, "rr\n", 1);
}

// int main(){
// 	t_stack *head = create_stack_a(ft_split("1 2", ' '));
// 	ra(head);
// 	int y = 0;
// 	t_stack *node = head;
// 	while (y < 2){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}
// }