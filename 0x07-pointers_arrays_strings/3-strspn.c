#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: substring to be searched for
 *
 * Descriptoin: returns the number of bytes in the initial segment of s which
 * only consist of bytes from accept
 * Return: int equal to number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i] == '\0')
				return (count);
		}
		s++;
	}

	return (count);
}
