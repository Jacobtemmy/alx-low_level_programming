#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program to print my name
 * @argc: An argument count
 * @argv: An argument
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	int i, j, multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	multiply = i * j;
	printf("%d\n", multiply);
	return (0);
}
