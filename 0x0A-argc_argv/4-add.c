#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program to print my name
 * @argc: An argument count
 * @argv: An argument
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	int i, j, n;
	char *arg;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		j = 0;
		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	n = atoi(arg);
	if (n < 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += n;
	}
printf("%d\n", sum);
return (0);
}
