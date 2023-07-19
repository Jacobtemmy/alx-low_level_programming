#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - A function to initialise struct
 * @d: Struct
 * @name: Name of dog
 * @age: The age in float
 * @owner: The name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}
