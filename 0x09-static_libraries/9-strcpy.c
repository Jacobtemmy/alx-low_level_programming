#include "main.h"
/**
 * _strcpy - to copy string
 * @dest: Character
 * @src: String
 * Return: dest
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
