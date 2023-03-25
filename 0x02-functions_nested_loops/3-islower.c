#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to be checked
 *
 * Description: checks for lowercase character
 * Return: 1 (if lowercase) 0 (otherwise)
 */
int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
			return (1);
		else
			continue;
	}
	return (0);
}
