#include "main.h"
/**
 * _print_rev_recursion - A function to prints a string in reverse
 * @s: A character
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
