#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 *  _pall - function that prints all the elements of a dlist
 * @h : const - list_t
 * @count: count.
 * Return: the number of notes.
 */
void _pall(stack_t **h, unsigned int count)
{
	stack_t *temp;

	(void) count;
	temp = *h;
	if (!h)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
