#include <stdio.h>
/**
 * main - Fibonacci
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c, i = 3;

	printf("%d, %d, ", a, b);

	while (i <= 50)
	{
		c = a + b;
		printf("%d", c);
		if (i != 50)
		{
			printf(", ");
		}
	i++;
	a = b;
	b = c;
	}
printf("\n");
return (0);
}
