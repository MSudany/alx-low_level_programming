#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all elements in a list
 * @h: list
 *
 * Description: ...
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
