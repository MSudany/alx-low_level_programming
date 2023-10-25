#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be matched
 *
 * Description: finds the 1st occurence of the substring in the string
 * Return: pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (needle)
		return (haystack);

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[++i])
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return (haystack);
}
