#include "lists.h"

/**
 * delete_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;
	unsigned int i = 0;

	if (head && *head)
	{
		curr = *head;
		if (index == 0)
		{
			*head = curr->next;
			if (curr->next != NULL)
				curr->next->prev = NULL;
			free(curr);
			return (1);
		}

		while (curr)
		{
			if (i == index)
			{
				temp = curr->next;
				curr->next = temp->next;
				temp->next->prev = curr;
				free(temp);
				return (1);
			}
			curr = curr->next;
			i++;
		}
	}
	return (-1);
}

