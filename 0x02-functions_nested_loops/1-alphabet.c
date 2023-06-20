#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase, followed by newline
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
