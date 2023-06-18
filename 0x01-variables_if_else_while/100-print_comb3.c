#include <stdio.h>
/**
 * main - Description Digital Combination
 * Return: 0 Success
 */
int main(void)
{
int a = 0;
int b = 1;

while (a < 10)
{
	while (b < 10)
	{
		if (a != b)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8 || b != 9)
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
