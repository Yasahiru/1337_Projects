/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloutman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 16:08:33 by hloutman          #+#    #+#             */
/*   Updated: 2025/12/31 16:08:34 by hloutman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				value;
	struct s_list	*previous;
	struct s_list	*next;
}	t_stack;

t_stack	*push_swap(char *joined_args);
void	ft_free(t_stack *lst);
void	free_arr(char **arr);
void	show_arr(t_stack *head);

int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
long	ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);

t_stack	*ft_lstnew(int content);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstclear(t_stack **lst, void (*del)(int));
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);

t_stack *create_stack_a(char **arr);
void	show_arr(t_stack *head);
int		is_number(char *str);
int		check_arr(char **arr);
int		is_multiple_signs(char *str);
int		is_repeated(char **arr, char *number);

void	ft_sort(t_stack *a, size_t size);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack **b);
// void	pa(t_stack *a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	ra(t_stack *a);
void	rb(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
