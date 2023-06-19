#include <stdio.h>
/**
 * main -  Another program
 * Return: 0 Success
 */
int main(void)
{
int a = 0;
int b = 1;

while (a < 100)
{
	while (b < 100)
	{
		if (a <= b)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	b++;
	}
a++;
b = a + 1;
}
putchar('\n');
return (0);
}
