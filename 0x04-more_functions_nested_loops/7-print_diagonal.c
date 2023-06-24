#include "main.h"
/**
 * print_diagonal - To print diagonally
 * @n: n marks the number of time in inter
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('/');
			_putchar('\n');
			i++;
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
