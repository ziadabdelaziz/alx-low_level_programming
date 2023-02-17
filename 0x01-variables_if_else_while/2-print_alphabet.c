#include <stdio.h>

/**
* main - program starting point
* Description: print alphabet
* Return: 0 indicates successfull execution
*/
int main(void)
{
	char *alpha;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	while (*alpha != '\0')
	{
		putchar(*alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
