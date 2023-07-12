#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * @str: A string
 * Return: A character
 */
char *_strdup(char *str)
{
	size_t len;
	char *p;

	if (str == 0)
	{
		return (0);
	}
	len = strlen(str);
	p = malloc(len + 1);
	if (p == 0)
	{
		return (0);
	}
	strcpy(p, str);
	return (p);
}