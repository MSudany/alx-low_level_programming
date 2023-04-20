#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void pchar(va_list list);
void pint(va_list list);
void pfloat(va_list list);
void pstring(va_list list);

typedef struct
{
	char * specifier;
	void (*f)(va_list);
} func;

/**
 * print_all - ...
 * @format: ...
 *
 * Description: ...
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	func types[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring}
	};

	va_start(list, format);

	while (format != NULL && format[i])
	{
		while (j < 4)
		{
			if (format[i] == *types[j].specifier)
				types[j].f(list);
			j++;
		}
		i++;
	}

	va_end(list);

	printf("\n");
}

/**
 * pchar - ...
 * @list: ...
 *
 * Description: ...
 * Return: void
 */
void pchar(va_list list)
{
	char c = va_arg(list, int);
	printf(", %c", c);
}

/**
 * pint - ...
 * @list: ...
 *
 * Description: ...
 * Return: void
 */
void pint(va_list list)
{
	int i = va_arg(list, int);
	printf(", %d", i);
}

/**
 * pfloat - ...
 * @list: ...
 *
 * Description: ...
 * Return: void
 */
void pfloat(va_list list)
{
	double f = va_arg(list, double);
	printf(", %f", f);
}

/**
 * pstring - ...
 * @list: ...
 *
 * Description: ...
 * Return: void
 */
void pstring(va_list list)
{
	char * s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf(", %s", s);
}
