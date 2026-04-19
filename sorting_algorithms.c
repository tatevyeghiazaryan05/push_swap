#include "push_swap.h"

void	selection(t_stack *a, t_stack *b)
{
	int	min_index;

	while(a->size != 0)
	{
		min_index = find_min(a->head);
		find_operation(min_index, a);
		push(a, b);
	}
	while(b->size != 0)
		push(b, a);
}

static int	find_min(t_node *head)
{
	int	min_number_index;
	int	min_number;
	int	current_index;

	current_index = 0;
	min_number_index = 0;
	min_number = head->value;
	while (head)
	{
		if (head->value < min_number)
		{
			min_number = head->value;
			min_number_index = current_index;
		}
		current_index++;
		head = head->next;
	}
	return (min_number_index);
}

static void	find_operation(int min_index,t_stack *a)
{
	int	i;

	if (min_index <= a->size/2)
	{
		i = 0;
		while(i < min_index)
		{
			rotate(a);
			i++;
		}
	}
	else
	{
		i = 0;
		while(i < (a->size - min_index))
		{
			reverse_rotate(a);
			i++;
		}
	}
}
