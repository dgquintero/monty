#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 * _pint - function that prints the last element of a list
 * @h : const - list_t
 *
 *
 * Return: the number of notes.
 */
void _pint(stack_t **h, unsigned int count)
{

	if (h == NULL)
        {dprintf(STDERR_FILENO, "L%d: error\n", count);
                exit(EXIT_FAILURE);
        }
	while (*h != NULL)
	{
		*h = (*h)->next;
	}
	printf("%d\n", (*h)->n);
}
