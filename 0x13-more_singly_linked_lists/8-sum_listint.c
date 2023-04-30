#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all data in a list
 * @head: pointer to the list
 *
 * Description: ...
 * Return: sum of int values in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}

		return (sum);
	}

	return (0);
}
