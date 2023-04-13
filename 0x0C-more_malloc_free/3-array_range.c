#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: ending value
 *
 * Description: creates an array of integers starting with min and ending with
 * max
 * Return: array of integers created or NULL on failure
 */
int *array_range(int min, int max)
{
	int *a, i, l = 0;

	if (min > max)
		return (NULL);

	i = min;
	while (i <= max)
	{
		i++;
		l++;
	}

	a = malloc(l * sizeof(a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		*(a + i) = min;
		min++;
	}

	return (a);
}
