#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: int, starting number
 *
 * Description: prints all natrual numbers from n to 98 followed by a new line
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else if (n < 98)
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
