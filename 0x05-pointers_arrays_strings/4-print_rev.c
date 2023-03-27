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
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	i = 0;
	while (count >= i)
	{
		_putchar(*(s + count-1));
		count--;
	}
	_putchar('\n');
}
