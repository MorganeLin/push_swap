#include "push_swap.h"

int	main(int ac, char **ag)
{
	t_stack	*stack;
	t_stack *stack_a;
	//t_stack	*tmp;
	char	**str;

	str = ag;
	stack = NULL;
	//tmp = stack;
	stack_a = NULL;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	if (ft_isvalid(ac, &stack, str))
	{
		if (ft_compare(&stack))
			ft_check_is_in_order(&stack);	
		else
			write(1, "Error - ft_compare\n", 19);
		//printf("PUSH\n");
		//printf("stack\n");
		//while (stack != NULL)
		//{
		//	printf("%d\n", stack->value);
		//	stack = stack->next;
		//}
		//printf("stack A\n");
		//while (stack_a != NULL)
		//{
		//	printf("%d\n", stack_a->value);
		//	stack_a = stack_a->next;
		//}
		ft_push(&stack, &stack_a);
		printf("stack\n");
		while (stack != NULL)
		{
			printf("%d\n", stack->value);
			stack = stack->next;
		}
		printf("stack A\n");
		while (stack_a != NULL)
		{
			printf("%d\n", stack_a->value);
			stack_a = stack_a->next;
		}
		/*printf("SWAP\n");
		tmp = stack;
		while(tmp != NULL)
		{
			printf("%d\n", tmp->value);
			tmp = tmp->next;
		}
		ft_swap_a(&stack);
		printf("------------------\n");
		tmp = stack;	
		while(tmp != NULL)
		{
			printf("%d\n", tmp->value);
			tmp = tmp->next;
		}
		ft_clear(&stack);
		return (0);*/
	}
}
