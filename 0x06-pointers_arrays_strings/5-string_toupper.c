#include "main.h"

/**
* string_toupper - to upper case
* @str: string
* Return: 0 indicates successfull execution
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
}
