#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be evaluated
 *
 * Description: returns the square root of a number
 * Return: (-1) if n does not have a natural square root or n 's natural square
 * root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (recursive_sqrt(n, 1));
}

/**
 * recursive_sqrt - function with additional argument to solve the problem
 * @n: number to be evaluated
 * @i: square root of the number if any
 *
 * Description: assistive function
 * Return: int square root, -1 no square roots
 */
int recursive_sqrt(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n > i * i)
		return (recursive_sqrt(n, ++i));
	return (-1);
}
