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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
