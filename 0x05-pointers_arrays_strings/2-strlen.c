#include "main.h"
/**
 * _strlen - Function to return string length
 * @s: A character
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
return (len);
}
