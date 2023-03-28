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
	int length;

	while (str[i++])
		length++;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
