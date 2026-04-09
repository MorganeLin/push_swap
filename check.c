#include "push_swap.h"

int	ft_check_is_in_order(t_stack **stack)
{
	t_stack	*tmp;
	
	tmp = (*stack)->next;
	while (tmp)
	{
		if((*stack)->value > tmp->value)
		{
			write(1, "Il faut trier\n", 14);
			return (1);
		}
		*stack = (*stack)->next;
		tmp = tmp->next;
	}
	write(1, "OK - Pas besoin de trier\n", 25);
	return (0);
}

