#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initializes a struct of a dog
 * @d: struct to be initialized
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: intializes a struct of type dog with given arguments
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
