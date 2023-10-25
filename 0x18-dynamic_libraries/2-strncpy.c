#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to receive the copy
 * @src: string to be copied
 * @n: at most n bytes of src are copied
 *
 * Description: copies a string
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
