/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:11:01 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 23:18:55 by mduhoux          ###   ########.fr       */
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
				if ((ag[i][j] == '-' && j != 0)
					|| ag[i][j] != '-')
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
	t_stack	*compare_with;

	if (*stack == NULL)
	{
		write(1, "NO - ft_compare\n", 16);
		return (0);
	}
	compare_with = *stack;
	while (compare_with->next != NULL)
	{
		tmp = compare_with;
		while (tmp->next != NULL)
		{
			if (compare_with->value == tmp->next->value)
			{
				write(1, "NO - ft_compare\n", 16);
				return (0);
			}
			tmp = tmp->next;
		}
		compare_with = compare_with->next;
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

int	ft_isvalid(int ac, t_stack **stack, char **str)
{
	if (ac == 2)
	{
		if (ft_check_digit(str))
		{	
			str = ft_split(str[1], ' ');	
			ft_convert_split_args(str, stack);
		}
	}
	if (ac > 2)
	{
		if (ft_isnb(ac, str))
			ft_convert_args(ac, str, stack);
	}
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
	if (ft_isvalid(ac, &stack, str))
	{	
		if (ft_compare(&stack))
			write(1, "OK - pour trier\n", 16);
		else
			write(1, "Error - ft_compare\n", 19);
	}
	ft_clear(&stack);
	return (0);
}
