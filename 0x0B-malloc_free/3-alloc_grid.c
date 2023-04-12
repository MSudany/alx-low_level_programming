#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to 2d array
 * @width: array width
 * @height: array height
 *
 * Description: returns a pointer to 2d array
 * Return: pointer to 2d array or NULL on faliure
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	s = (int **)malloc(height * sizeof(int *));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));

		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			s[i][j] = 0;

	return (s);
}
