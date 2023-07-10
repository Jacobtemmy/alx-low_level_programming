#include "main.h"
/**
 * _puts - A pointer to print a string
 * @str: A string
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
