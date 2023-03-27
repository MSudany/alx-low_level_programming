#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to charcater
 *
 * Description: finds the length of an array of characters
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

