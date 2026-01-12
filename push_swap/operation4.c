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

void	rra(t_stack *a)
{
	int		tmp;

	t_stack (*current_node), (*next_node);
	current_node = a;
	while (current_node->next)
	{
		next_node = current_node->next;
		tmp = next_node->value;
		next_node->value = current_node->value;
		current_node->value = tmp;
		current_node = current_node->next;
	}
	write(1, "ra\n", 3);	
}

void	rrb(t_stack *b)
{
	int		tmp;

	t_stack (*current_node), (*next_node);
	current_node = ft_lstlast(b);
	while (current_node->next)
	{
		next_node = current_node->next;
		tmp = next_node->value;
		next_node->value = current_node->value;
		current_node->value = tmp;
		current_node = current_node->next;
	}
	write(1, "rb\n", 3);	
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(3, "rr\n", 1);
}

// int main(){
// 	t_stack *head = create_stack_a(ft_split("1 2 3 4 5", ' '));
// 	int y = 0;
// 	t_stack *node = head;
// 	while (y < 5){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}
// 	printf("\n");
// 	rra(head);
// 	y = 0;
// 	node = head;
// 	while (y < 5){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}

// 	printf("\n");
// 	rra(head);
// 	y = 0;
// 	node = head;
// 	while (y < 5){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}
// printf("\n");
// 	rra(head);
// 	y = 0;
// 	node = head;
// 	while (y < 5){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}
// printf("\n");
// 	rra(head);
// 	y = 0;
// 	node = head;
// 	while (y < 5){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}
// printf("\n");
// 	rra(head);
// 	y = 0;
// 	node = head;
// 	while (y < 5){
// 		printf("%d->", node->value);
// 		node = node->next;
// 		y++;
// 	}
// }