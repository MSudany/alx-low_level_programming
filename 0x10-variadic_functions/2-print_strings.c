#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 *
 * Description: ...
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	if (n < 1)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
