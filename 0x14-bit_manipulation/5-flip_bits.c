#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * 
 * Description: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long i = 0, res;

	res = n ^ m;
	while (res > 0)
	{
		if (res & 1)
			i++;
		res >>= 1;
	}
	return (i);
}
