/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:11:01 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 19:37:21 by mduhoux          ###   ########.fr       */
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
			if (ag[i][j] < '0' || ag[i][j] > '9')
			{
				if (ag[i][j] == '-' && j != 0)
				{
					write(1, "Error\n", 6);
					return (0);
				}
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

t_stack	*ft_convert_split_args(char **ag, t_stack **stack)
{
	int			i;
	int			j;
	t_stack		*next_node;

	i = 1;
	if (!stack)
	{
		write(1, "KO - les arguments sont convertis\n", 34);
		return (NULL);
	}
	*stack = ft_create_node(ft_atoi(ag[0]));
	while (ag[i])
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
	char	**str;

	str = ag;
	stack = NULL;
	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (ac == 2)
	{
		if (ft_check_digit(ag))
		{
			str = ft_split(ag[1], ' ');	
			ft_convert_split_args(str, &stack);
		}
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}	
		if (ft_compare(&stack))
			write(1, "OK - pour trier\n", 16);
		else
			write(1, "Error - ft_compare\n", 19);
	}
	else if (ac > 2)
	{
		if (ft_isvalid(ac, ag, &stack))
		{	
			if (ft_compare(&stack))
				write(1, "OK - pour trier\n", 16);
			else
				write(1, "Error - ft_compare\n", 6);
		}
	}	
//		if (ft_isvalid(ac, str, &stack))
//		{	
//			if (ft_compare(&stack))
//				write(1, "OK - pour trier\n", 16);
//			else
//				write(1, "Error - ft_compare\n", 6);
//		}
	return (0);
}
