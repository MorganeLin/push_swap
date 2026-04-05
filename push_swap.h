/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:10:07 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 15:39:58 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_create_node(int value);
void	*ft_add_list(t_stack **begin, t_stack *new_last_node);
void	*ft_clear(t_stack **lst);
t_stack	*ft_convert_args(int ac, char **ag, t_stack **stack);
int		ft_compare(t_stack **stack);

#endif
