#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Description: prints a string followed by a new line
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
