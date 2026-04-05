/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:11:01 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 15:17:20 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnb(int ac, char **ag)
{
	int	i;
	int	j;

	i = 1;
	if (!*ag[1])
		return (0);
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			if (ag[i][j] == '+' || ag[i][j] == '-')
				j++;
			if (ag[i][j] < '0' || ag[i][j] > '9')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	write(1, "OK - ft_isdigit\n", 16);
	return (1);
}

int	ft_compare(t_stack **stack)
{
	t_stack	*tmp;

	if (stack == NULL)
	{
		write(1, "NO - ft_compare\n", 16);
		return (0);
	}
	while ((*stack)->next != NULL)
	{
		tmp = *stack;
		while (tmp->next != NULL)
		{
			if ((*stack)->value == tmp->next->value)
			{
				write(1, "NO - ft_compare\n", 16);
				return (0);
			}
			tmp = tmp->next;
		}
		*stack = (*stack)->next;
	}
	write(1, "OK - ft_compare\n", 16);
	return (1);
}

t_stack	*ft_convert_args(int ac, char **ag, t_stack **stack)
{
	int			i;
	int			j;
	t_stack		*next_node;

	i = 2;
	if (!stack)
	{
		write(1, "KO - les arguments sont convertis\n", 34);
		return (NULL);
	}
	*stack = ft_create_node(ft_atoi(ag[1]));
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			j++;
		}
		next_node = ft_create_node(ft_atoi(ag[i]));
		ft_add_list(stack, next_node);
		i++;
	}
	write(1, "OK - les arguments sont convertis\n", 34);
	return (*stack);
}

int	ft_isvalid(int ac, char **ag, t_stack **stack)
{
	if (ft_isnb(ac, ag))
		ft_convert_args(ac, ag, stack);
	else
	{
		write(1, "KO - ft_isdigit\n", 16);
		return (0);
	}
	write(1, "OK - ft_isvalid\n", 16);
	return (1);
}

int	main(int ac, char **ag)
{
	t_stack	*stack;
	char **str;

	stack = NULL;
	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ac == 2)
	{
		str = ft_split(ag[1], ' ');
	}
	if (ft_isvalid(ac, ag, &stack))
	{
		ft_compare(&stack);
	}
	else
		write(1, "Error - ft_compare\n", 6);
	return (0);
}
