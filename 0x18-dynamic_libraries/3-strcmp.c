#include "main.h"

/**
* _strcmp - copy string
* @s1: string
* @s2: string
* Return: 0 indicates successfull execution
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	diff = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && diff == 0; i++)
		diff = s1[i] - s2[i];

	if (s1[i] != '\0' && diff == 0)
		diff = s1[i];

	if (s2[i] != '\0' && diff == 0)
		diff = 0 - s2[i];

	return (diff);
}
