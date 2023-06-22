#include "main.h"
/**
 * _isupper - A function to return 1 if uppercase and otherwise
 * @c: An integer value
 * Return: 1 if upper and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
