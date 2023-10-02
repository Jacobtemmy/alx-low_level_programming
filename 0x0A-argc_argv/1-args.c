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
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
