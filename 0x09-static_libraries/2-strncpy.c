#include "main.h"
/**
 * _strncpy - A function tocopy a string
 * @dest: Destination
 * @src: Source
 * Return: A character
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n >= 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n >= 0)
	{
		dest = '\0';
		dest++;
		n--;
	}
return (result);
}
