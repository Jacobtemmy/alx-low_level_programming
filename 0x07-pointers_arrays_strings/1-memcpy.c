#include "main.h"
/**
 * _memcpy - A function to cpoy memory
 * @dest:The destination memory
 * @src: The source
 * @n: The integer
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
