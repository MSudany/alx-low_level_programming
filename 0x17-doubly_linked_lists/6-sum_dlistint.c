#include "lists.h"
/**
 * sum_dlistint - ...
 * @head: ...
 * Return: ...
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head)
	{
		while (head)
		{
			result += head->n;
			head = head->next;
		}
		return (result);
	}
	return (0);
}

