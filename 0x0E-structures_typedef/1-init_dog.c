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
	/* Passing to stucture from main */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

