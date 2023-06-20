#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  defines struct odg
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

