#include "main.h"
/**
 * _strcat - A function to concatenate two strings
 * @dest: A charater pointer
 * @src: A pointer
 * Return: A character
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
