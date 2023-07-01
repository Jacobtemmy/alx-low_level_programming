#include "main.h"
/**
 * cap_string - A function to capitalize wach word
 * @a: A character pointer
 * Return: The string
 */
char *cap_string(char *str)
{
	int i;
	int capital = 1;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if(capital && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
			capital = 0;
		}
		else if (!capital && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||  str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')) 
		{
			capital = 1;
		}
		else
		{
			capital = 0;
		}
}
return (str);
}
