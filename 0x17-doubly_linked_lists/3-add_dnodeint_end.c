#include "lists.h"

/**
 * add_dnodeint_end - ...
 * @head: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_t, *curr;

	if (head)
	{
		new_t = malloc(sizeof(dlistint_t));
		if (new_t == NULL)
			return (NULL);

		new_t->n = n;
		new_t->next = NULL;

		if (*head == NULL)
		{
			new_t->prev = NULL;
			*head = new_t;
			return (new_t);
		}

		curr = *head;
		while (curr->next)
			curr = curr->next;

		curr->next = new_t;
		new_t->prev = curr;

		return (new_t);
	}
	return (NULL);
}

