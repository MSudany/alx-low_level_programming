#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar\n";
	unsigned long i;
	for (i = 0; i < strlen(c); i++)
		_putchar(c[i]);

        return (0);
}
