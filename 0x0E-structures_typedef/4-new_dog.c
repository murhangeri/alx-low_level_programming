#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - dog type function
 * @name: input name
 * @age: input age
 * @owner: input owner
 *
 * Return: return struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
