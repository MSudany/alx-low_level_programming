#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: args counter
 * @argv: args container
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0, i = 1;
	unsigned int j;
	char *e;

	while (i < argc)
	{
		e = argv[i];

		for (j = 0; j < strlen(e); j++)
		{
			if (e[j] < 48 || e[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(*(argv + i));
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
