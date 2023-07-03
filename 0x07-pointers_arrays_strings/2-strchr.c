#include "main.h"
/**
 * _strchr - A function to locate a character in a string
 * @s: A string s
 * @c: A character c
 * Return: NULL or c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
return (0);
}
