#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node from list
 * @head: ...
 * @index: ...
 *
 * Description: ...
 * Return: ...
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *temp;
	unsigned int i = 0;

	if (head && *head)
	{
		if (index == 0)
		{
			*head = curr->next;
			free(curr);
			return (1);
		}

		while (curr)
		{
			if (i == index)
			{
				temp = curr->next;
				curr->next = temp->next;
				free(temp);
				return (1);
			}
			curr = curr->next;
			i++;
		}
	}
	return (-1);
}
