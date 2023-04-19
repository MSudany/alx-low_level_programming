#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - Entry point
 * @argc: ...
 * @argv: ...
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
		return (0);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
/*
	a = a < 0 ? -1 * atoi(a) : atoi(a);
	b = b < 0 ? -1 * atoi(b) : atoi(b);
*/
	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
