#include <stdio.h>
/**
 * main - A program that prints its name
 * Return: Always 0
 * @argc: A count
 * @argv: An argument
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Program name not available");
	}
return (0);
}
