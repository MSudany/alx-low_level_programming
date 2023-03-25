#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Description: checks for alphabetic character
 * Return: 1 (if c is a letter) 0 (otherwise)
 */
int _isalpha(int c)
{
	int i;

	for (i = 65; i < 123; i++)
	{
		if (c == i && (c < 91 || c > 96))
			return (1);
	}
	return (0);
}
