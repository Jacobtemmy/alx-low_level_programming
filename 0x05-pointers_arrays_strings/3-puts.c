#include "main.h"
/**
 * _puts - A function to prints a string
 * @str: A character
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
