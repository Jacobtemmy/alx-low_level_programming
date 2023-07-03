#include "main.h"
/**
 * _strspn - String Length
 * @s: Segment
 * @accept: Accept
 * Return: A value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
return count;
}
