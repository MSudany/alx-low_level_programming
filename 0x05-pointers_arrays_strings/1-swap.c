#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Description: swaps the values of two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

