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
void _pall(const stack_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
