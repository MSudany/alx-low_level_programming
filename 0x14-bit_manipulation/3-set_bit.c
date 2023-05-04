#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 * 
 * Description: ...
 * Return: ...
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int temp = *n, i = index;

	while (temp > 0 && i > 0)
	{
		temp >>= 1;
		if (temp == 0 && i != 0)
			return (-1);
		i--;
	}

	*n = *n | (1 << index);

	if (*n & (1 << index))
		return (1);

	return (-1);
}
