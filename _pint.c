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
void _pint(stack_t **h, unsigned int n)
{
	size_t i = 0;

	(void) n;
	while (*h != NULL)
	{
		*h = (*h)->next;
		i++;
	}
	printf("%d\n", h->n);
}
