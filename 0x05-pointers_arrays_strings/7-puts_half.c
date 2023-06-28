#include "main.h"
/**
 * puts_half - print half of a string
 * @str: a character value
 */
void puts_half(char *str)
{
	int i = 0;
	char *p = str;
	int n;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	n = i / 2;
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
	}
	p = str + n;
	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
_putchar('\n');
}
