#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: dog's name
 * @age: dog age
 * @owner: owner's name
 * Description: long dog struct in big kitty world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
