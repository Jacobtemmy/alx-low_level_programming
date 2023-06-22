#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function to print value of n to 98
 * @n: an Integer
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
while (n > 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
printf("98\n");
}
