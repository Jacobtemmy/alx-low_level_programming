#include "main.h"
/**
 * is_palindrome - A funtion palindrome
 * @s: The string
 * Return: An integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
return (len);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (s[0] != s[len - 1])
	{
		return (0);
	}
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
