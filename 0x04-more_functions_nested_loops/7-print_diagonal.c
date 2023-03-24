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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; j--)
				_putchar(' ');
		}
		_putchar('\\');

	}
	else
		_putchar('\n');
}
