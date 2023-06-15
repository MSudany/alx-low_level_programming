#include "lists.h"
/**
 * free_dlistint - ...
 * @head: ...
 * Return: ...
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *curr;

	curr = head;
	while(curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}

	head = NULL;
}

