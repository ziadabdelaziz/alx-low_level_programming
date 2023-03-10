#include "main.h"

/**
* cap_string - Capitalize words
* @str: string
* Return: 0 indicates successfull execution
*/
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i] != '\0' && str[i + 1] != '\0'; i++)
		if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;

	return (str);
}
