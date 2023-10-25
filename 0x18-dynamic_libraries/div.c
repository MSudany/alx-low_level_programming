#include "main.h"
/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: divides two integers and returns the result
 * Return: int
 */
int div(int a, int b)
{
	int s;

	if (b == 0)
		return (-1);

	s = a / b;

	return (s);
}

