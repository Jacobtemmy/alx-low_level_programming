#include "main.h"
/**
 * _print_rev_recursion - A function that prints a r
 * @s: A string
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
