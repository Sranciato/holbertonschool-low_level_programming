#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

/**
 * _strdup - check the code for Holberton School students.
 * @str: variable name.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i, len;
	char *p = str;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	p = malloc(sizeof(char) * len + 1);
	if (p)
	{
		for (i = 0; i <= len; i++)
			p[i] = str[i];
		return (p);
	}
	free(p);
	return (NULL);
}
/**
 * new_dog - create a new dog.
 * @name: The character to print.
 * @age: dog age.
 * @owner: dog owner.
 * Return: dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = _strdup(name);
	p->age = age;
	p->owner = _strdup(owner);
	return (p);
}
