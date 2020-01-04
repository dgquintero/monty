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
void _push(stack_t **h, unsigned int count)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	(void) count;
	if (!new)
		return;

	new->n = num;
	new->next = *h;
	new->prev = NULL;
	if (*h)
		(*h)->prev = new;
	*h = new;
}
/**
 *free_stack - Funtion that frees a list.
 * @head: Head of the list.
 * Return: Void.
 */
void free_stack(stack_t **h)
{
	stack_t *temp;

	if (*h == NULL || h == NULL)
		exit(EXIT_FAILURE);

	while (h != NULL)
	{
		temp = (*h)->next;
		free(temp);
		*h = temp;
	}
}
