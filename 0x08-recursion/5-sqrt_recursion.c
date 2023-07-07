#include "main.h"
/**
 * _sqrt_recursion_help - A square root function
 * @n: An integer value
 * @start: The starting index of the search range
 * @end: The ending index
 * Return: The sqrt of n
 */
int _sqrt_recursion_help(int n, int start, int end)
{
	int mid, mid_sqr;

	mid = (start + end) / 2;
	mid_sqr = mid * mid;
	if (mid_sqr == n)
	{
		return (mid);
	}
	else if (start >= end)
	{
		return (-1);
	}
	else if (mid_sqr < n)
	{
		return (_sqrt_recursion_help(n, mid + 1, end));
	}
	else
	{
	return (_sqrt_recursion_help(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - Computes the square root of a number using recursion
 * @n: The number to find the square root of
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_recursion_help(n, 1, n / 2));
}
}
