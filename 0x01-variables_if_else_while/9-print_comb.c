#include <stdio.h>

/**
* main - program starting point
* Description: print alphabet lower and upper case
* Return: 0 indicates successfull execution
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(44);
		putchar(32);
	}

	putchar('\n');
	return (0);
}
