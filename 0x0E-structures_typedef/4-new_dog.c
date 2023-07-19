#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog_t structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog_t structure, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
{
return (NULL);
}
new_dog_ptr->name = malloc(strlen(name) + 1);
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}
strcpy(new_dog_ptr->name, name);
new_dog_ptr->age = age;
new_dog_ptr->owner = malloc(strlen(owner) + 1);
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}
strcpy(new_dog_ptr->owner, owner);
return (new_dog_ptr);
}
