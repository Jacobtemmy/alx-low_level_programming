#include "main.h"
/**
 * print_rev - A function to print a string in reverse order
 * @s: A character
 */
void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;		
	}
	while (p >= s)
	{
		_putchar(*p);
		p--;
	}
_putchar('\n');
}
