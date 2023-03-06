#include "main.h"

/**
* _strchr - search string
* @s: string
* @c: character
* Return: pointer to first occurence
*/
char *_strchr(char *s, char c)
{
	char *target;
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			target = (s + i);
			return (target);
		}
	}

	return (NULL);
}
