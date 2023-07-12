#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - A function that returns a pointer to a newly allocated
 * @s1: A string
 * @s2: A string
 * Return: A character
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *p;

	p = malloc(len1 + len2 + 1);
	if (p == 0)
	{
		return (0);
	}
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}
