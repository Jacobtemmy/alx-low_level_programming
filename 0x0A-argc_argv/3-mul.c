#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program to print number of arguments passed
 * @argc: Argument count
 * @argv: Argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = (a * b);
		printf("%d\n", result);
		return (0);
	}
}
