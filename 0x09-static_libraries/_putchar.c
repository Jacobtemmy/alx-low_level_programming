#include "unistd.h"
/**
 * _putchar - To output on the console
 * @c: A charatcer
 * Return: The character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
