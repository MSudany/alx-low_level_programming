#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 *
 * Description: ...
 * Return: address of new element or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	char *dstr = strdup(str);
	int i;

	if (head != NULL && str != NULL)
	{
		list = malloc(sizeof(list_t));
		if (list == NULL)
			return (NULL);

		for (i = 0; dstr[i] != '\0'; i++)
			;

		list->str = dstr;
		list->len = i;
		list->next = *head;

		*head = list;
	}

	return (NULL);
}
