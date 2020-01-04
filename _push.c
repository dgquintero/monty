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
void _push(stack_t **h, unsigned int count)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!sup.num && sup.num != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", count);
		exit(EXIT_FAILURE);
	}

	new->n = atoi(sup.num);
	new->next = *h;
	new->prev = NULL;
	if (*h)
		(*h)->prev = new;
	*h = new;
}
