#include "main.h"
/**
 * _memset - A memory set for data
 * @s: A pointer to the memory area s
 * @b: The constant byte
 * @n: Number of memory areas to be filled
 * Return: the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
