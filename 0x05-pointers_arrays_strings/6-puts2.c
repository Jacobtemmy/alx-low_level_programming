#include "main.h"
/**
 * puts2 - A function to print by 2
 * @str: A character value
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
			a += 2;
		}
	}
_putchar('\n');
}
