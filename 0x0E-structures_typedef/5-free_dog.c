#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - check the code for Holberton School students.
 * @d: variable name.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
