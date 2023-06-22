#include "main.h"
/**
 * more_numbers - More numbers
 */
void more_numbers(void)
{
	int a,b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
		}
	_putchar('\n');
	}
}
