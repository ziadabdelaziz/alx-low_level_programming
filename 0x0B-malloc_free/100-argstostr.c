#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - create matrix
* @ac: integer
* @av: list of strings
* Return: strings concatinated
*/
char *argstostr(int ac, char **av)
{
	int i, j, index, len;
	char *str;
	int sizes[ac];

	if (ac == 0 || av == 0)
		return (0);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		len += j + 1;
		sizes[i] = j;
	}

	str = malloc(len);
	if (str == 0)
		return (0);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < sizes[i]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = '\n';
		index++;
	}

	return (str);
}
