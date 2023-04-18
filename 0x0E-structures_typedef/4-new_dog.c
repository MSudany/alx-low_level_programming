#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: creates a new struct dog
 * Return: pointer new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(d));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
