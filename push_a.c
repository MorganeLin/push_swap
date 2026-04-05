/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:43:24 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 15:30:30 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp2 = NULL;
	if (!*stack_a)
		return ;
	tmp = *stack_a;
	tmp->next = NULL;
	*stack_a = (*stack_a)->next;
	tmp = *stack_b;
	tmp->next = tmp2;
}
/*
int	main(int ac, char **ag)
{
	if (ac < 2)
		return (0);
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*node1;
	t_stack	*node2;
	t_stack	*node3;

	stack_a = ft_create_node(ft_atoi(ag[1]));
	node1 = ft_create_node(ft_atoi(ag[2]));
	node2 = ft_create_node(ft_atoi(ag[3]));
	stack_b = ft_create_node(ft_atoi(ag[4]));
	node3 = ft_create_node(ft_atoi(ag[5]));
	add_list(&stack_a, node1);
	add_list(&stack_a, node2);
	add_list(&stack_b, node3);
	printf("stack A\n");
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	printf("stack B\n");
	while (stack_b != NULL)
	{
		printf("%d\n", stack_b->value);
		stack_b = stack_b->next;
	}
	ft_push(&stack_a, &stack_b);
	printf("stack A\n");
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	printf("stack B\n");
	while (stack_b != NULL)
	{
		printf("%d\n", stack_b->value);
		stack_b = stack_b->next;
	}
}*/
