#include "main.h"
/**
 * factorial - A function to find the factorial of a given number
 * @n: A factorial number to be find
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
