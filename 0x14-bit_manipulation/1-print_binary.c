#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - ...
 * @n: ...
 * 
 * Description: ...
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int rev;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (temp = n, rev = 0; (temp >>= 1) > 0; rev++)
		;

	for (; rev >= 0; rev--)
	{
		if ((n >> rev) & 1)
			printf("1");
		else
			printf("0");
	}
}
