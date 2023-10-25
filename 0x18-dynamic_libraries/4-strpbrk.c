#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: characters to be located
 *
 * Description: locates the first occurence in s of any bytes in accept
 * Return: pointer to matched byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *d = NULL;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}

	return (d);
}
