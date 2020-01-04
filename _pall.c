#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 *  _pall - function that prints all the elements of a dlist
 * @h : const - list_t
 *
 *
 * Return: the number of notes.
 */
void _pall(stack_t **h, unsigned int count)
{
	stack_t *temp = *h;

	if (h == NULL)
	{dprintf(STDERR_FILENO, "L%d: error\n", count);
                exit(EXIT_FAILURE);
        }
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
