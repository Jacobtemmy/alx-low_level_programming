#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program to print number of arguments passed
 * @argc: Argument count
 * @argv: Argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int j, i, num;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
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
		num = atoi(arg);
		if (num > 0)
		{
			sum += num;
		}
	}
printf("%d\n", sum);
return (0);
}
