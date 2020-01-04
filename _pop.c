#include "monty.h"
/**
 *
 *
 *
 *
 */
void _pop(stack_t **h, unsigned int count)
{
	stack_t *temp;

	temp = *h;
	if (temp == NULL)
	{
		printf("L%d: can't pop an empty stack\n", count);
		exit(EXIT_FAILURE);
	}
	temp = (*h)->next;
	free(*h);
	*h = temp;
}
