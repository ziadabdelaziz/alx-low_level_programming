#include <stdio.h>

/**
* main - program starting point
* Description: print all combinations of two digits
* Return: 0 indicates successfull execution
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48 + (i - 48) + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
