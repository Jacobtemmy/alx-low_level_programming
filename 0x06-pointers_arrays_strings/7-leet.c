#include "main.h"
/**
 * leet - A function to encode a string
 * @str: A character
 * Return: Character
 */
char *leet(char *str)
{
	char *letter = "aAeEoOtTlL";
	char *sub = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = sub[j];
				break;
			}
		}
	}
return (str);
}
