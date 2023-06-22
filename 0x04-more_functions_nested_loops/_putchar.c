#include <unistd.h>
/**
 * _putchar - Program to output
 * @c: Character
 * Return: Output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
