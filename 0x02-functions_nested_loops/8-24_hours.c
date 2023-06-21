#include "main.h"
/**
 * jack_bauer - functions to print every minute
 */
void jack_bauer(void)
{
	int hour = 0, minutes = 0;

	while (hour < 24)
	{
		while (minutes < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
			minutes++;
		}
	hour++;
	minutes = 0;
	}
}
