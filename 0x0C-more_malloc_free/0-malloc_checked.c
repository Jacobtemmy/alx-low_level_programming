#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A program that allocates a memory
 * @b: An unsigned integer
 * Return: ptr, and 98 if NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
	{
		exit (98);
	}
return (ptr);
}
