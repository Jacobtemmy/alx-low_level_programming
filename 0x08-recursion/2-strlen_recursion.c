#include "main.h"
#include <stdlib.h>
/**
 * _strlen_recursion - A function to return the length of a string
 * @s: A character
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
