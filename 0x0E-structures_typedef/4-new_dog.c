#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);

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
	dog_t *d;
	int n, o;

	if (name != NULL && owner != NULL)
	{	
		n = _strlen(name) + 1;
		o = _strlen(owner) + 1;

		d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);
		
		d->name = malloc(sizeof(n));
		if(d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(sizeof(o));
		if(d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}

		d->name = name;
		d->age = age;
		d->owner = owner;
	}

	return (d);
}

int _strlen(char *s)
{
	int i;
	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
