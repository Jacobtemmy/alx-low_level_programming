#include "main.h"
/**
 * rev_string - A funtion that reverses a string
 * @s: A character value
 */
void rev_string(char *s)
{
	char *p = s;
	char temp;

	while (*p != '\0')
	{
		p++;
	}
	p--;
	while (p >= s)
	{
		temp = *s;
		*s = *p;
		*p = temp;
	s++;
	p--;
	}
}
