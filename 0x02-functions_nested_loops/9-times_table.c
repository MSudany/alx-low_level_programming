#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 0)
				_putchar(' ');
			if (i * j > 9)
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + i * j);
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
