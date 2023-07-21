#include "variadic_functions.h" 
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - A function to sum all integers
 * @n - An integer valie
 * Return: An integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list summing;
	va_start(summing, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			result = result + va_arg (summing, int); 
		}
	}
	va_end (summing);
	return (result);
}
