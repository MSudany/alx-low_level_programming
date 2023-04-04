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
	int j = 0;
	int savej;
	int len = 0;

	while (needle[i++])
		len++;

	while (*haystack)
	{
		i = 0;
		if (needle[i] == *haystack)
		{
			savej = j;
			while (needle[i])
			{
				if (needle[i] != haystack[j])
				{
					j = savej;
					break;
				}
				i++;
			}
		}

		haystack++;
		j++;
	}
}
