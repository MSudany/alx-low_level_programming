#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @int: to evaluate it's absolute value
 *
 * Desription: computes the absolute value of an integer
 * Return: int (represents input's absolute value)
 */
int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (n);
	return (-1*n);
}
