#include "lists.h"
#include <stddef.h>

/**
 * list_len - ...
 * @h: ...
 *
 * Description: ...
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			h = h->next;
			len++;
		}
		else
			break;
	}

	return (len);
}