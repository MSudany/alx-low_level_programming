#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * no args
 *
 * Description: print lowercase alphabet [a-z].
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
        int i;
	int j;

	for (j = 0; j < 10; j++)
	{
        	for (i = 97; i < 123; i++)
                	_putchar(i);
        	_putchar('\n');
	}
}
