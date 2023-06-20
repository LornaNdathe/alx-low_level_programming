#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates struct dog
 * @d: pointer for struct dog
 * @name: name of dog
 * @age: age of dof
 * @owner: information about owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

