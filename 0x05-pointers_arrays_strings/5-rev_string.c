#include "main.h"

/**
* print_rev - reverse string
* @s: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void print_rev(char *s)
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
