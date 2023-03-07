#include "main.h"

/**
* _strstr - find substring
* @haystack: string
* @needle: string
* Return: substring begining
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, found, temp;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) != *(needle))
			continue;

		found = 1;
		temp = i;
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(needle + j) != *(haystack + temp))
				found = 0;
			temp++;
		}
		if (found)
			return (haystack + temp);
	}

	return '\0';
}
