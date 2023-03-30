#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: array of characters
 * @src: array of characters
 * @n: max number of characters extracted from src
 *
 * Description: concatenates two strings
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for(i = 0; i < n; i++)
		dest[len++] = src[i];
	
	return (dest);
}
