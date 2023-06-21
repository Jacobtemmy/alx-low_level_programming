#include "main.h"
/**
 * print_last_digit - Funtion to print the last digit of a number
 * @r: Value must be an Integer
 * Return: The last digit
 */
int print_last_digit(int r)
{
int lastdigit = r % 10;

if (lastdigit < 0)
{
lastdigit  = -lastdigit;
}
_putchar('0' + lastdigit);
return (lastdigit);
}
