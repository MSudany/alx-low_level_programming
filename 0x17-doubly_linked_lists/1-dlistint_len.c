#include "lists.h"
/**
 * dlistint_len - ...
 * @h: ...
 * Return: ...
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

