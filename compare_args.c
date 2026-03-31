/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:13:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/29 19:53:15 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_compare(t_list **stack)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		
		j = i + 1;
		while (j < ac)
		{
			if (ag[i] == ag[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}	
	write(1, "OK - ft_compare\n", 16);
	return (1);
}	
