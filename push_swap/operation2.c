/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:30:41 by hloutman          #+#    #+#             */
/*   Updated: 2026/01/04 13:30:44 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	pb(t_stack *a, t_stack *b)
// {
// 	size_t	size_a;

//	if (!a){
// 		printf("a is null");
// 		return ;
// 	}
// 	if (!b)
// 		b = ft_lstnew(0);
// 	t_stack (*node), (*last_node_a), (*last_node_b);
// 	size_a = ft_lstsize(a);
// 	last_node_a = ft_lstlast(a);
// 	if (last_node_a->previous){
// 		node = last_node_a->previous;
// 		node->next = NULL;
// 		last_node_b = ft_lstlast(b);
// 		last_node_a->previous = last_node_b;
// 		last_node_b->next = last_node_a;
// 		last_node_a->next = NULL;
// 	}
// 	else {
// 		a = NULL;
// 		last_node_b = ft_lstlast(b);
// 		last_node_a->previous = last_node_b;
// 		last_node_b->next = last_node_a;
// 		last_node_a->next = NULL;
// 	}
// 	write(1, "pb\n", 3);
// }

// void	pa(t_stack *a, t_stack *b)
// {
// 	size_t	size_a;

// 	t_stack (*node), (*last_node_a), (*last_node_b);
// 	size_a = ft_lstsize(b);
// 	last_node_a = ft_lstlast(b);
// 	node = last_node_a->previous;
// 	node->next = NULL;
// 	last_node_b = ft_lstlast(a);
// 	last_node_a->previous = last_node_b;
// 	last_node_b->next = last_node_a;
// 	last_node_a->next = NULL;
// 	write(1, "pa\n", 3);
// }

// int main(){
// 	t_stack *head = create_stack_a(ft_split("5 6 7 5", ' '));
// 	// t_stack *head2 = create_stack_a(ft_split("1", ' '));
// 	t_stack *head2 = NULL;
// 	// printf("size1 = %d \n", ft_lstsize(head));
// 	pb(head,head2);
// 	// printf("size2 = %d \n", ft_lstsize(head));
// 	// int y = 0;
// 	// while (y < 1){
// 	// 	printf("%d ", head->value);
// 	// 	head = head->next;
// 	// 	y++;
// 	// }
// 	// printf(" <= node b node a => ");
// 	// y = 0;
// 	while (head2->next){
// 		printf("%d ", head2->value);
// 		head2 = head2->next;
// 	}
// 	printf("%d ", head2->value);
// }