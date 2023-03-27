#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be evaluated
 *
 * Descriptin: prints the last digit of a number
 * Return: int that represents the last digit
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else if (n < 0)
	{
		n = -n;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	_putchar('0');
	return (0);
}
