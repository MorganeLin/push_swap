/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:10:07 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/06 19:52:13 by mduhoux          ###   ########.fr       */
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
int		ft_check_digit(char **ag);
int	ft_isnb(int ac, char **ag);
void	ft_push(t_stack **stack_a, t_stack **stack_b);
int	ft_check_is_in_order(t_stack **stack);
int	ft_isvalid(int ac, t_stack **stack, char **str);

#endif
