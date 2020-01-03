#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _push - adds a new node at the beginning
 * @head : const - list_t
 * @n: const int
 *
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
