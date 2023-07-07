#include "main.h"
/**
 * is_prime_helper - Helper function for is_prime_number
 * @n: The integer to check
 * @i: The number to check for divisibility
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_help(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	return (is_prime_help(n, i + 6));
}
/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The integer to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}
if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
return (is_prime_help(n, 5));
}
