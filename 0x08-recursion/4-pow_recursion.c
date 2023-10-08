#include "main.h"
/**
 * _pow_recursion - A function to return the value of x to power y
 * @x: The integer
 * @y: The power
 * Return: An integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
