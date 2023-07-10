#include "main.h"
/**
 * _memcpy - A function to copya memory
 * @dest: destination
 * @src: source
 * Return: A character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
