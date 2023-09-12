#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a veriavle of stract dog
 * @d: the dog to initialize
 * @name: the dog's name
 * @age: age's dog
 * @owner: owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
