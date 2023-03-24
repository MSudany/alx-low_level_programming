#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: line length
 *
 * Description: prints a diagnoal line
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = n;
	if (n > 0)
	{
		while (i > 0)
		{
			_putchar('\\');
			while (i < n);
				_putchar(' ');
		}

	}
	else
		_putchar('\n');
}
