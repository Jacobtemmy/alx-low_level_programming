#include "main.h"
/**
 * _strncat - String catenation
 * @dest: Destination
 * @src: source
 * @n: No of bytes
 * Return: Result
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
