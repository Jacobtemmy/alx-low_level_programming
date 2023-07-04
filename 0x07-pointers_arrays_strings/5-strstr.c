#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: A string
 * @needle: A string
 * Return: A character
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q = needle;

	while (*p != '\0')
	{
		if (*q == '\0')
		{
			return (haystack);
		}
		if (*q == *p)
		{
			q++;
		}
		else
		{
			q = needle;
		}
		p++;
		haystack++;
	}
	if (*q == '\0')
	{
		return (haystack);
	}
return (0);
}
