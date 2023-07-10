#include "main.h"
/**
 * _strcpy - A function to copy string
 * @dest: destination
 * @src: source location
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
*p = '\0';
return (dest);
}
