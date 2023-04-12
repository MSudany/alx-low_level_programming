#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: appends s2 to s1 in a newly allocated memory
 * Return: pointer to the newly allocated memory or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;

	s = malloc(((strlen(s1) + strlen(s2)) + 1) * sizeof(char));

	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
		*(s + i) = *(s1 + i);

	for (; i < strlen(s1) + strlen(s2); i++)
		*(s + i) = *(s2 + (i - strlen(s1)));

	return (s);
}
