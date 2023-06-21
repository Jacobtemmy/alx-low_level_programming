#include "main.h"
/**
 * times_table - Print times table
 */
void times_table(void)
{
int i = 0;
int j, result;
while (i < 10)
{
j = 0;
while (j < 10)
{
result = i * j;
if (j == 0)
{
_putchar(result + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
