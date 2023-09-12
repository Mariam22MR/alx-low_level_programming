#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a veriavle of stract dog
 * @d: pointer to the strut name
 * @name: the dog's name
 * @age: age's dog
 * @owner: owner's name
 * Return: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	{	(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
