#include "main.h"
/**
 * _strpbrk - String break
 * @s: Occurence in the string
 * @accept: Match
 * Return: A character
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	}
return (0);
}
