#include <stdio.h>
/**
 * main - to print fizz buzz
 * Return: 0
 */
int main(void)
{
	int a = 1;

	while (a < 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
		printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	a++;
	}
printf("Buzz\n");
return (0);
}
