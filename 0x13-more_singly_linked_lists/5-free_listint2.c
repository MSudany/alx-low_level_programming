#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: pointer to pointer to list
 *
 * Description: ...
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	curr = *head;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}

	*head = NULL;
}
