#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: array of characters
 * @src: array of characters
 *
 * Description: appends the first string, overwriting the \0
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	i = 0;
	while (src[i])
	{
		dest[len++] = src[i];
		i++;
	}

	return (dest);
}
