#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print dog
 * @d: dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("%s\n", d->name);
	else
		printf("name: %s\n", d->name);
	if (d->age == 0)
		printf("%f\n", d->age);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("%s\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
