#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Description: function that reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	char t;

	while (*(s + i))
	{
		count++;
		i++;
	}

	i = count - 1;
	while (count / 2 <= i)
	{
		t = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = t;
		i--;
	}
}
