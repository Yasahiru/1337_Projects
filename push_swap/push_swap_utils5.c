/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:33:32 by hloutman          #+#    #+#             */
/*   Updated: 2025/10/26 22:33:33 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*newlist;

	newlist = malloc(sizeof(t_stack));
	if (!newlist)
		return (NULL);
	newlist->value = content;
	newlist->next = NULL;
	return (newlist);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (lst);
	if (lst->next != NULL)
		return (ft_lstlast(lst->next));
	return (lst);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_stack *lst)
{
	if (!lst)
		return (0);
	if (lst->next)
		return (1 + ft_lstsize(lst->next));
	return (1);
}

// int main(){
// 	t_stack *head = NULL;
// 	int i = 1;
// 	while (i < 4){
// 		t_stack *node = ft_lstnew(i);
// 		ft_lstadd_back(&head,node);
// 		i++;
// 	}
// 	printf("size = %d", ft_lstsize(head));
// 	// free();
// }