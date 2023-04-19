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
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	o = get_op_func(argv[2]);

	if (!o)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", o(a, b));

	return (0);
}
