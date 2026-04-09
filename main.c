#include "push_swap.h"

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
			ft_check_is_in_order(&stack);	
		else
			write(1, "Error - ft_compare\n", 19);
	}
	
	ft_clear(&stack);
	return (0);
}
