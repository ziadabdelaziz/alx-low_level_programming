#include "main.h"

/**
* main - program strting point
* Describtion: print alphabet
* Return: 0 - success
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - print alphabet
* Describtion: prints alphabet letters
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
