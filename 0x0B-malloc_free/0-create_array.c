#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function to create an array of chars
 * @size: An unsigned integer
 * @c: A character
 * Return: A character
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (p == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
