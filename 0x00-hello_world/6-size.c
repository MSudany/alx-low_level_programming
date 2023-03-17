#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int integerType;
	float floatType;
	long int longintType;
	long longlongintType;
	char charType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
