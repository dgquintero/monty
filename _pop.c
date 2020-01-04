#include "monty.h"
/**
 *
 *
 *
 *
 */
void _pop(stack_t **h, unsigned int count)
{
	stack_t *temp = *h;

	if (*h == NULL)
	{dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", count);
		exit(EXIT_FAILURE);
	}

	if ((*h)->next != NULL)
	{
		temp = (*h)->next;
		free(*h);
		temp->prev = NULL;
		*h = temp;
	}

	else
	{
		free(*h);
		*h = NULL;
	}
}
