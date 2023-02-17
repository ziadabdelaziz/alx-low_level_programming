#include <stdio.h>

/**
* main - program starting point
* Description: print alphabet lower and upper case
* Return: 0 indicates successfull execution
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
