#include "main.h"
/**
 * _strncpy - A function used to copy a string
 * @dest: Destination
 * @src: A source
 * @n: Integer value
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n > 0 && *src != '\0')
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
