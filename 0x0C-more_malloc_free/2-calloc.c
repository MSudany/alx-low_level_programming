#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of a single element
 *
 * Description: allocates memory for an array using malloc
 * Return: pointer of specified type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		*(p + i) = 0;
		i++;
	}

	return (p);
}
