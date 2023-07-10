#include "main.h"
/**
 * _isalpha - A function for checking alpha
 * @c: A charater
 * Return: An integer
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
