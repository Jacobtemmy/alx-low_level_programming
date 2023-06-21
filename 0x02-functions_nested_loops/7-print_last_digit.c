#include "main.h"
/**
 * print_last_digit - Funtion to print the last digit of a number
 * @r: Value must be an Integer
 * Return: The last digit
 */
int print_last_digit(int r)
{
	r = r % 10;

	{
		_putchar('0' + r);
	}
return (r);
}
