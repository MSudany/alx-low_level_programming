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
	void *p;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (nmemb-- > 0)
	{
		ptr = (unsigned char *)p;
		*ptr++ = 0;
	}

	return (p);
}
