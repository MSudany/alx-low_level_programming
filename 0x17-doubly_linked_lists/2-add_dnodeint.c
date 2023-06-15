#include "lists.h"
/**
 * add_dnodeint - ...
 * @head: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_t;

	new_t = malloc(sizeof(dlistint_t));
	if (new_t == NULL)
		return (NULL);

	new_t->n = n;
	new_t->prev = NULL;
	new_t->next = *head;


	if (*head != NULL)
		(*head)->prev = new_t;
	*head = new_t;

	return (new_t);
}

