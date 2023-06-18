#include <stdio.h>
/**
 * main - Alphabet without e and q
 * Return: 0 (Success)
 */
int main(void)
{
char t = 'a';

while (t <= 'z')
{
if (t != 'e' && t != 'q')
{
putchar(t);
}
t++;
}
putchar('\n');
return (0);
}
