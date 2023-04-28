#include "lists.h"
#include <stdlib.h>

/**
 * free_list - ...
 * @head: ...
 *
 * Description: ...
 * Return: ...
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
	free(head);
}