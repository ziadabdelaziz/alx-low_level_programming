#include "main.h"

/**
* rev_string - reverse string
* @s: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void rev_string(char *s)
{
	char *r;
	char *l;
	char temp;

	r = s;
	while (*r != '\0')
		r++;

	l = s;
	while (r > l)
	{
		r--;
		temp = *l;
		*l = *r;
		*r = temp;
		l++;
	}
}
