#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: always void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
