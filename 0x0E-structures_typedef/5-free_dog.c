#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for dogs
 * @d: pointer to memory allocated
 *
 * Description: frees memory dynamically allocated for dogs
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
