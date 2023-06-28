#include <stdio.h>
/**
 * main - Perfect
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2;
	int limit = 4000000;
	int sum = 0, temp;

	while (a <= limit)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
	temp = a + b;
	a = b;
	b = temp;
	}
printf("%d\n", sum);
return (0);
}
