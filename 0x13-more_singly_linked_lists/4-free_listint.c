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
	listint_t *curr, *temp;

	curr = head;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}

	free(curr);
}
