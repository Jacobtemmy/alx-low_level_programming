#include "main.h"
/**
 * _print_rev_recursion - A function to print out recursion
 * @s: A charatcer pointer
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
