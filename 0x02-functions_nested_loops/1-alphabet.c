#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet(void) - print lowercase alphabet
 * @args: no args
 * 
 * Description: print lowercase alphabet [a-z].
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
