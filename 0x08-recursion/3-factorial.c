#include "main.h"
/**
 * factorial - A program to find a factorial of a number
 * @n: Factorial of the number
 * Return: -1 if n < 0 and 1 if n is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
