#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - ...
 * @head: ...
 * @str: ...
 *
 * Description: ...
 * Return: address of new element or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list_end, *temp;
	int i;

	if (str != NULL)
	{
		list_end = malloc(sizeof(list_t));
		if (list_end == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
			;

		list_end->str = strdup(str);
		list_end->len = i;
		list_end->next = NULL;

		if (*head == NULL)
		{
			*head = list_end;
			return (list_end);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;
			
			temp->next = list_end;
			return(temp);
		}

	}

	return (NULL);
}
