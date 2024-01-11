#include "main.h"
/**
 * _pow_recursion - A function to return the value of x raised to power
 * @x: The Whole number
 * @y: The power
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
