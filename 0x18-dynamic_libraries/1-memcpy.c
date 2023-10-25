#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: memory area to recieve copied
 * @src: memory area to be copied
 * @n: n bytes to be copied from the memory area
 *
 * Description: copies n bytes from src mem area to dest mem area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (d);
}
