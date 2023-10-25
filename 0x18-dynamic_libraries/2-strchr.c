#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Description: locates a character c in a string s
 * Return: pointer to the first occurence / NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *l = NULL;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (l);
}
