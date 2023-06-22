#include "main.h"
/**
 * _isdigit - A function to show if the value is integer
 * @c: An Integer value
 * Return: if value is digit return 1 and otherwise
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
