#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: args counter
 * @argv: args container
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));
	
	return (0);
}
