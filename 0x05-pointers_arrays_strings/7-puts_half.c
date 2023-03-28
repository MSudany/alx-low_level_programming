#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 *
 * Description: prints half a string followed by a new line
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int length = 0;
	int c;

	while (str[i++])
		length++;

	if (length % 2 == 0)
		c = length / 2;
	else
		c = (length + 1) / 2;

	for (i = c; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
