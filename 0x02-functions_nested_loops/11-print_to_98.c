#include "main.h"
/**
 * print_to_98 - Function to print value of n to 98
 * @n: an Integer
 */
void print_to_98(int n)
{
	int p = 98;

	while (n <= p)
	{
		_putchar('0' + n);
		n++;
	}
	while (n > p)
	{
		_putchar('0' + n);
		n--;
	}
}
