#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - writes the character c to stdout
 * @d: The character to print.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
