#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize an array
 *
 * Description: creates an array and initializes it with c
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size < 1)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		printf("Failed to allocate memory");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		*(s + i) = c;

	return (s);
}
