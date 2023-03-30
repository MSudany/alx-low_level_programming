#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be transformed
 *
 * Description: changes all lowercase letters of a string to uppercase
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;

	for (i = 0; i <= len; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}

	return (s);
}
