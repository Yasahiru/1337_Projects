#include "push_swap.h"

void	ft_push_max(t_stack **a, t_stack **b)
{
	int		max;
	int		pos;
	int		i;
	t_stack	*node;

	i = 1;
	max = 0;
	pos = 0;
	node = *a;
	while(node)
	{
		if (max < node->value)
			max = node->value;
		node = node->next;
	}
	node = *a;
	while (node)
	{
		pos++;
		if (node->value == max)
			break;
		node = node->next;
	}
	while (i < pos)
	{
		ra(a);
		i++;
	}
	pb(a,b);
}

void	ft_auto_2(t_stack **stack_a)
{
	sa(stack_a);
}

void	ft_auto_3(t_stack **stack_a)
{
	t_stack *first = *stack_a;
	t_stack *second = first->next;
	t_stack *third = second->next;

	if (first->value < second->value && second->value < third->value && third->value > first->value)
		return;
	if (first->value > second->value && first->value > third->value)
	{
		if(second->value > third->value)
		{
			ra(stack_a);
			sa(stack_a);
		}
		else
			ra(stack_a);
	}
	else if (second->value > first->value && second->value > third->value)
	{
		if (first->value > third->value)
			rra(stack_a);
		else
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	else if (third->value > second->value && third->value > first->value)
		sa(stack_a);
}

void	ft_auto_4(t_stack **a, t_stack **b)
{
	ft_push_max(a, b);
	ft_auto_3(a);
	pa(a,b);
	ra(a);
}

int main(){
	t_stack *head = create_stack_a(ft_split("-130 130 300 -221", ' '));
	t_stack *head2 = NULL;
	ft_auto_4(&head, &head2);
	// ft_auto_3(&head);

	while (head2)
	{
		printf("%d ",head2->value);
		head2 = head2->next;
	}
}

// -130 130 300 -221
// -221 -130 130 | 300
// -221 130 -130 | 300