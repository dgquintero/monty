#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
int num;
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

	new = malloc(sizeof(stack_t));
	(void) count;
	if (new == NULL)
	{dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = num;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
}
