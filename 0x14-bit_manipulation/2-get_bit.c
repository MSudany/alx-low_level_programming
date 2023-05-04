#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 *
 * Description: ...
 * Return: ...
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp = n, i = index;

	while (temp > 0 && i > 0)
	{
		temp >>= 1;
		if (temp == 0 && i != 0)
			return (-1);
		i--;
	}

	if (n & (1 << index))
	{
		return (1);
	}
	return (0);
}
