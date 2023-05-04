#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - ...
 * @b: ...
 * 
 * Description: ...
 * Return: ...
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, d = 0, len = 0;

	if (b != NULL)
	{
		while (b[len])
			len++;

		while (len--)
		{
			if (b[len] != 49 && b[len] != 48)
				return (0);
			if (b[len] == 49)
				i += 1 << d;
			d++;
		}
		return (i);
	}
	return (0);
}
