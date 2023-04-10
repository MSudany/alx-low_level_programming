#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character
 *
 * Description: checks for a digit (0 through 9).
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
