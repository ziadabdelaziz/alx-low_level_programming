#include "main.h"

/**
* get_length - return string length
* @s: string
* Return: string length
*/
int get_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + get_length(s + 1));
}

/**
* check_palindrom - check palindrom
* @s: string
* @i: integer
* @j: integer
* Return: integer
*/
int check_palindrom(char *s, int i, int j)
{
	if (i > j)
		return (1);

	if (*(s + i) != *(s + j))
		return (0);

	return (check_palindrom(s, i + 1, j - 1));
}

/**
* is_palindrome - is palindrom
* @s: string
* Return: integer
*/
int is_palindrome(char *s)
{
	int len;

	len = get_length(s);

	return (check_palindrom(s, 0, len - 1));
}
