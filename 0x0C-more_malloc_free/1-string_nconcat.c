#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2
 *
 * Description: appends n bytes of s2 to s1
 * Return: pointer to newly allocated s1 followed by n bytes from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l, l1 = strlen(s1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > strlen(s2))
		n = strlen(s2);

	l = l1 + n + 1;

	s = malloc(l * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i <= l1)
			s[i] = s1[i];

		if (i >= l1)
		{
			s[i] = s2[j];
			j++;
		}
	}
	s[l] = '\0';

	return (s);
}
