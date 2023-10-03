#include <unistd.h>
#include "main.h"
/**
 * _putchar - To print out on the console
 * @c: A character 
 * Return: A value of c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
