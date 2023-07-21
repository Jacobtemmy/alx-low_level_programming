#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    const char *p;
    char c;
    int i;
    char *s;
    float f;
    int printed;

    va_start(args, format);
    p = format;
    while (*p)
    {
        printed = 0;
        if (*p == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
            printed = 1;
        }
        if (*p == 'i')
        {
            i = va_arg(args, int);
            printf("%s%d", printed ? ", " : "", i);
            printed = 1;
        }
        if (*p == 'f')
        {
            f = (float)va_arg(args, double);
            printf("%s%f", printed ? ", " : "", f);
            printed = 1;
        }
        if (*p == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
            {
                printf("%s(nil)", printed ? ", " : "");
            }
            else
            {
                printf("%s%s", printed ? ", " : "", s);
            }
        }
        p++;
    }
    printf("\n");
    va_end(args);
}
