#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - ...
 * @h: ...
 *
 * Return: ...
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}

