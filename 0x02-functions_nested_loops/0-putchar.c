#include "main.h"

/**
* main - program starting point
* Describtion: print "_putchar"
* Return: 0 - success
*/
int main(void)
{
	char *str;

	str = "_putchar";
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
