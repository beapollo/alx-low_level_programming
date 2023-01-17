#include "dog.h"
/**
 * init_dog - initializing dog
 * @d: passing dog structure
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
