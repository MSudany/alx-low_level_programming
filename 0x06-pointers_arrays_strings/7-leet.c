#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Description: encodes a string into leet code
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};
	int i = 0, j, k;

	while (s[i])
	{
		k = 0;
		for (j = 1; j < 10; j += 2)
		{
			if (s[i] == c[j] || s[i] == c[j - 1])
			{
				s[i] = n[k];
			}
			k++;
		}
		i++;
	}
	return (s);
}
