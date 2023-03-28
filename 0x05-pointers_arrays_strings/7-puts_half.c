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

	while (s[i++])
		length++;


	for (i = 0; i < length / 2; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
