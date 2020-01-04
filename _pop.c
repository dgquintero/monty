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
                dprintf(STDERR_FILENO,
                        "L%u: can't pop, stack empty\n", count);
                exit(EXIT_FAILURE);
        }
	*h = temp->next;
	if (temp->next)
		temp->next->prev = NULL;
	free(temp);
}
