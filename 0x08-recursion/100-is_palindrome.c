#include "main.h"

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
	int i;
	int len;

	len = 0;
	for(i = 0; *(s + i) != '\0'; i++)
		len++;

	return (check_palindrom(s, 0, len - 1));
}
