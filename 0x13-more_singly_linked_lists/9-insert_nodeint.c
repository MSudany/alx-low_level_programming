#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer to list
 * @idx: position of the insertion
 * @n: element to be inserted
 *
 * Description: ...
 * Return: pointer to new element or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
	}
	else
	{
		while (temp)
		{
			if (i == idx)
			{
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
			temp = temp->next;
			i++;
		}
	}

	return (NULL);
}
