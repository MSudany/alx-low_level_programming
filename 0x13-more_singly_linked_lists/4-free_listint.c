#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head of a list
 *
 * Description: frees a list of type listint_t
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *next;

	curr = malloc(sizeof(listint_t));
	if (curr == NULL)
		return;

	next = malloc(sizeof(listint_t));
	if (next == NULL)
		return;

	curr = head;
	next = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

}

