#include "main.h"

/**
* leet - encode string into 1337
* @str: string
* Return: 0 indicates successfull execution
*/
char *leet(char *str)
{
	int i;
	int len;
	char *str1;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;

	str1 = malloc(sizeof(char) * len);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str1[i] = 4;

		else if (str[i] == 'e' || str[i] == 'E')
			str1[i] = 3;

		else if (str[i] == 'o' || str[i] == 'O')
			str1[i] = 0;

		else if (str[i] == 't' || str[i] == 'T')
			str1[i] = 7;

		else if (str[i] == 'l' || str[i] == 'L')
			str1[i] = 1;

		else
			str1[i] = str[i];
	}

	str = str1;

	return (str);
}
