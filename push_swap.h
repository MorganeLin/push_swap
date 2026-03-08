/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:05:49 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/07 21:30:08 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	int	value;
	struct s_list *next;
} t_list;

t_list	*create_node(int value);
void	*add_list(t_list **begin, t_list *new_last_node);
void	*clear(t_list	**lst);
int	ft_atoi(char *str);

#endif
