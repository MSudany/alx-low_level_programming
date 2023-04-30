#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node to a list
 * @head: pointer to head of a list
 * @n: new element
 *
 * Description: adds new node to the end of a list
 * Return: address of new element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curr;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		else
		{
			curr = *head;
			while (curr->next != NULL)
				curr = curr->next;

			curr->next = new;
			return (new);
		}
	}

	return (NULL);
}
