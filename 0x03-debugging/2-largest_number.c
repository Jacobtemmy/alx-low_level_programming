#include "main.h"
/**
 * largest_number - Returns the largest number
 * @a: First integer
 * @b: Second Integer
 * @c: Third Integer
 * Return: Always 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
