#include <unistd.h>
/**
 * _putchar - A function to output
 * @c: A character to print
 * Return: An integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
