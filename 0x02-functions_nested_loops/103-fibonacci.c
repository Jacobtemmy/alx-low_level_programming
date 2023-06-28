#include <stdio.h>
/**
 * main - Perfect
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c;
	int i = 0;

	printf("%d, %d, ", a, b);
	c = a + b;
	while (c < 4000000)
	{
		while (i < c)
		{
			if (c % 2 == 0)
			{
				printf("%d", c);
				if (c != 4000000)
				{
					printf(", ");
				}
			}
		i++;
		}
	c++;
	i = c + 1;
	a = b;
	b = c;
	}
return (0);
}
