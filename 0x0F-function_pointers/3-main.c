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

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
