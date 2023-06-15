#include "lists.h"
/**
 * get_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node_t;

	if (head)
	{
		node_t = head;
		while (node_t && i <= index)
		{
			if (i == index)
				return (node_t);
			node_t = node_t->next;
			i++;
		}
		return (NULL);
	}
	return (NULL);
}

