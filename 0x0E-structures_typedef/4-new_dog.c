#include "dog.h"
#include <stdlib.h>


/**
*_strlen - length of string
*@str: string to be checked
*Return: returns length of string
*
*/


int _strlen(char *str)
{

	int l = 0;

	while (str)

		l++;


	return (l);
}


/**
*_strcopy - copy string pointed by src
*including (\0) to dest
*@dest: pointer of buffer storing string
*@src: pointer of  string to copy
*Return: adress of dest
*/
char *_strcpy(char *dest, char *src)
{
	int l, a;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < l; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
*new_dog - struct of new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns adress of new dog, NULL in case
*of failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (length1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (length2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

