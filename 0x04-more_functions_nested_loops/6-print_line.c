#include "main.h"
/**
 * print_line - to print lines
 * @n: To insert integer
 */
void print_line(int n)
{
	char c = '_';
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(c);
			i++;
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
