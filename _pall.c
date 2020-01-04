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

	if (!h || !(*h))
		return;

	temp = *h;
	while (temp->prev)
		temp = temp->prev;
	for (; temp->next; temp = temp->next)
		printf("%d\n", temp->n);

	printf("%d\n", temp->n);
}
