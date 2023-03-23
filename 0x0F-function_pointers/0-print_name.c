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
	if (name == NULL)
		return;
	f(name);
}
