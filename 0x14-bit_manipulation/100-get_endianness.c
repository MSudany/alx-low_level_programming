#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - ...
 *
 * Description: ...
 * Return: ...
 */

int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);

	return (0);
}
