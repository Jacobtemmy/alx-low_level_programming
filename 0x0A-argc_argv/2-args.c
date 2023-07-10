#include <stdio.h>
/**
 * main - A program to print my name
 * @argc: An argument count
 * @argv: An argument
 * Return: An integer
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
