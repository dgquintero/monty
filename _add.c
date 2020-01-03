#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 * _push - adds a new node at the beginning
 * @head : const - list_t
 * @n: const int
 *
 * Return: the address of the new element.
 */
stack_t *_add(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
        {dprintf(STDERR_FILENO, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
