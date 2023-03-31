#include "main.h"
/**
 * cap_string - changes all lowercase letters of a string to uppercase
 * @s: string to be transformed
 *
 * Description: changes all lowercase letters of a string to uppercase
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;

	for (i = 0; i <= len; i++)
	{
		while (!(s[i] > 96 && s[i] < 123))
			i++;

		if (s[i - 1] == ' ' ||
		    s[i - 1] == '\t' ||
		    s[i - 1] == '\n' ||
		    s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}' ||
		    i == 0)
			s[i] -= 32;
	}

	return (s);
}
