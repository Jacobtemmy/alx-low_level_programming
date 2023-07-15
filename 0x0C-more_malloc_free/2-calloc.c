#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: pointer to the allocated memory block, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
