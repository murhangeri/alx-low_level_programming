include "dog.h"
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
	struct dog *dog;

	dog = d;

	if (dog == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
			printf("Name: ((nil)");
		else
			printf("name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
