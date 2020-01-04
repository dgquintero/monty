#include "monty.h"
/**
 *free_stack - Funtion that frees a list.
 * @head: Head of the list.
 * Return: Void.
 */
void free_stack(stack_t **h)
{
	stack_t *head;

	head = *h;
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
