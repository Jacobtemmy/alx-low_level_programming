#include <unistd.h>
/**
 * _putchar - To prints on the console
 * @c: To take in character
 * Return: Output value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
