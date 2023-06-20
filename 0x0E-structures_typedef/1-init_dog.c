#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  defines struct odg
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: void
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{ 
		d = malloc(sizeof(struct dog));
		(*d).name = name;
		(*d).age = age;
		d->owner = owner;
	}

}
