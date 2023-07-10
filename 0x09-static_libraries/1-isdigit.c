#include "main.h"
/**
 * _isdigit - A function to check for digit
 * @c: A character
 * Return: Integer
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
