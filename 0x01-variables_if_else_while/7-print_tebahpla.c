#include <stdio.h>
/**
 * main - Reverse Alphabets
 * Return: 0 (Success)
 */
int main(void)
{
char a;

for (a = 'z'; a >= 'a'; --a)
{
putchar(a);
}
putchar('\n');
return (0);
}
