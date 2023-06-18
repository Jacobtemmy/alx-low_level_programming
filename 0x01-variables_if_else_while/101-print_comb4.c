#include <stdio.h>
/**
 * main - Combination of three digits program
 * Return: 0 Success
 */
int main(void)
{
int a = 0;
int b = 0;
int c = 0;

while (a < 10)
{
	while (b < 10)
	{
		while (c < 10)
		{
			if (a != b && b != c)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 && c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		b++;
		c = b + 1;
	}
	a++;
	b = a + 1;
	c = b + 1;
}
putchar('\n');
return (0);
}
