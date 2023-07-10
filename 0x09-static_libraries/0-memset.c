#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: A string s
 * @b: A string b
 * @n: a size
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
