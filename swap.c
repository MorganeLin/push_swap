/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:10:22 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/08 18:01:56 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_list **begin)
{
	t_list	*tmp;
	if((*begin)->next == NULL || *begin == NULL)
			return ;
	tmp  = (*begin)->next;
	(*begin)->next = tmp->next;
	tmp->next = *begin;
	*begin = tmp;
}
/*
int	main(int ac, char **ag)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	if(ac < 2)
		return(0);
	lst = ft_create_node(ft_atoi(ag[1]));
	node1 = ft_create_node(ft_atoi(ag[2]));
	node2 = ft_create_node(ft_atoi(ag[3]));
	node3 = ft_create_node(ft_atoi(ag[4]));
	add_list(&lst, node1);
	add_list(&lst, node2);
	add_list(&lst, node3);
	t_list	*tmp = lst;
	while(tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	ft_swap_a(&lst);
	printf("\n\n\n\n");
	tmp = lst;	
	while(tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("after lst value %d\n", lst->value);
	printf("after node1 value : %d\n", lst->next->value);
	printf("after lst : %p\n", lst);
	printf("after lst->next : %p\n", lst->next);
	printf("after node1 : %p\n", node1);
	printf("after node1->next : %p\n", node1->next);
	printf("after node2 : %p\n", node2);
	
}*/
