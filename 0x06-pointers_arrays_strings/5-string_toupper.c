#include "main.h"
/**
 * string_toupper - Convert string to upper
 * @a: A character
 * Return: A Character
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - ('a' - 'A');
		}
	i++;
	}
return (a);
}
