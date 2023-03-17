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
	long long int longlongintType;
	char charType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an integer: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floarType));
	return (0);
}
