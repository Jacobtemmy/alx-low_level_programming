#include "main.h"
/**
 * print_alphabet_x10 - A function to print alphabets in lowercase x10
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b < 26)
		{
			_putchar('a' + b);
			b++;
		}
	_putchar('\n');
	a++;
	}
}
