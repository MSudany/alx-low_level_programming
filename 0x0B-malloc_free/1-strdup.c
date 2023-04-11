#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string into a newly allocated array
 * @str: string to be duplicated
 *
 * Description: duplictes str into a newly allocated array
 * Return: a pointer to the copied string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	s = malloc((strlen(str) + 1) * sizeof(char));

	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
		*(s + i) = *(str + i);

	return (s);
}
