#include "lists.h"

/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_t, *node_t;
	unsigned int i = 0;

	if (h)
	{
		new_t = malloc(sizeof(dlistint_t));
		if (new_t == NULL)
			return (NULL);

		new_t->n = n;
		node_t = *h;

		if (idx == 0)
		{
			new_t->next = node_t;
			new_t->prev = node_t->prev;
			node_t->prev = new_t;
			*h = new_t;
			return (new_t);
		}

		while (node_t && i <= idx)
		{
			if (node_t->next == NULL && i == idx)
			{
				new_t->next = node_t->next;
				new_t->prev = node_t;
				return (new_t);
			}

			if (i == idx)
			{
				new_t->next = node_t->prev->next;
				new_t->prev = node_t->prev;
				node_t->prev->next = new_t;
				return (new_t);
			}
			node_t = node_t->next;
			i++;
		}
		return (NULL);
	}
	return (NULL);
}

