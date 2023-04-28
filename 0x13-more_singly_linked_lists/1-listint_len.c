#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * listint_len - computes number of elements in a list
 * @h: list
 *
 * Description: ...
 * Return: number of elements in h
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}

	return (s);
}
