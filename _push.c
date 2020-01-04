#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 * _push - adds a new node at the beginning
 * @head : const - list_t
 * @count: const int
 *
 * Return: the address of the new element.
 */
void _push(stack_t **head, unsigned int count)
{
	stack_t *new;
	int nn = 5;

	if (head == NULL)
	{dprintf(STDERR_FILENO, "L%d: error\n", count);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = nn;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
}
