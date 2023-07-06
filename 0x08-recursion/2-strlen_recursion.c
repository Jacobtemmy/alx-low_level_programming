#include "main.h"
/**
 * _strlen_recursion - A function to return string length
 * @s: A pointer character
 * Return: The length of the character
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s++));
	}
}
