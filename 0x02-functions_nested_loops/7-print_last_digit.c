#include "main.h"
/**
 * print_last_digit - Funtion to print the last digit of a number
 * @int: Value must be an Integer
 * Return: The last digit
 */
int print_last_digit(int r)
{
	int r = r % 10;

	{
		_putchar(r + '0');
	}
return (r);
}
