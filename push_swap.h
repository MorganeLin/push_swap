/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:10:07 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/29 20:40:28 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct	s_list
{
	int	value;
	struct s_list *next;
} t_list;

t_list	*ft_create_node(int value);
void	*ft_add_list(t_list **begin, t_list *new_last_node);
void	*ft_clear(t_list **lst);
int	ft_atoi(char *str);
t_list	*ft_convert_args(int ac, char **ag, t_list **stack);
int	ft_compare(t_list **stack);

#endif
