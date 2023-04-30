#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a list
 * @head: pointer to pointer to list
 *
 * Description: ...
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (0);
}
