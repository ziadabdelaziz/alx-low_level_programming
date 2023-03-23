#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: integer
* @f: pointer to a function
* Return: None
*/
void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; *(name + i) != '\0'; i++)
		f(name + i);
}
