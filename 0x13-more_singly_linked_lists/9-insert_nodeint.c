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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (head != NULL)
	{
		new->n = n;
		temp = *head;

		if (idx == 0)
		{
			new->next = temp;
			temp->next = NULL;
			*head = new;
		}
		else
		{
			while (temp && i < idx)
			{
				temp = temp->next;
				i++;
			}

			new->next = temp->next;
			temp->next = new;
		}

		return (new);
	}

	return (NULL);
}
