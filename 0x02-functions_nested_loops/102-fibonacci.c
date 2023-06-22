#include <stdio.h>
/**
 * main - Fibonacci
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int i = 3;

	printf("%ld, %ld, ", a, b);

	while (i <= 50)
	{
		c = a + b;
		printf("%ld", c);
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
