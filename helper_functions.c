#include "push_swap.h"

int	duplicate_numbers(t_stack *stack, int  value)
{	
	t_node	*current;
	current = stack->head;
	while ( current != NULL)
	{
		if (current->value == value)
			return (1);
		current = current->next;
	}
	return (0);
}
