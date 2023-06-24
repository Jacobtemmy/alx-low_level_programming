#include "main.h"
/**
 * more_numbers - More numbers
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col >= 10)
			{
				_putchar(col / 10 + '0');
			}
		_putchar(col % 10 + '0');
		}
	_putchar('\n');
	}
}
