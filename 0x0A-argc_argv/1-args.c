#include <stdio.h>
/**
 * main - A program that prints the number of arguments
 * @argc: A count
 * @argv: An argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("Nothing");
	}
return (0);
}
