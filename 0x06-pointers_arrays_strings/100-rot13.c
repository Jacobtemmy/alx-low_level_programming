#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13
 * @str: A string
 * * Return: A charater
 */
char *rot13(char *str)
{
	char c;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c >= 'a' || c <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				c++;
				if (c > 'z')
				{
					c = 'a';
				}
			}
		}
		for (j = 0; j < 13; j++)
		{
			c++;
			if (c > 'Z')
			{
				c = 'A';
			}
		}
		str[i] = c;
	}
return (str);
}
