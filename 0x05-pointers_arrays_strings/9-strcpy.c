#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: destination that recieves the copy
 * @src: string to be copied
 *
 * Description: copies the contents of a string to a specific destination
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, length = 0;

	while (src[i++])
		length++;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
