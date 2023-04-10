#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: args counter
 * @argv: args container
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
