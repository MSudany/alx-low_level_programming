#include "main.h"

/**
 * print_rev - prints a string
 * @s: string
 *
 * Description: prints a string in reverse followed by a new line
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (s[i++])
		count++;

	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
