#include <stdio.h>

/**
* main - program starting point
* Description: print dicimal numbers using ASCII code
* Return: 0 indicates successfull execution
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
