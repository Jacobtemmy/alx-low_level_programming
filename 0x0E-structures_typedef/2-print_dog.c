#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A funtion to print dog
 * @d: A pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Name: %s\n", d->owner ? d->owner : "(nil)");
}
