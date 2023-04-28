#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - adds new node to list
 * @head: list
 * @n: new node data
 *
 * Description: adds new node to the beginning of a list
 * Return: new node address or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;

		*head = new;
		return (new);
	}

	return (NULL);
}
