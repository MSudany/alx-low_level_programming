#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of a list
 * @index: element index
 *
 * Description: ...
 * Return: node at specified index or NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	if (head != NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node = head;
		while (count < index && node)
		{
			node = node->next;
			count++;
		}

		return (node);
	}

	return (NULL);
}
