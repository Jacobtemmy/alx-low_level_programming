#include "main.h"
/**
 * times_table - To print time table of 9
 */
void times_table(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			b = a * b;
			_putchar('0' + a);
			_putchar(',');
			_putchar(' ');
			_putchar('0' + b);
			_putchar(',');
			_putchar(' ');
			b++;
		}
	a++;
	b = a + 1;
	}
}
