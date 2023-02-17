#include <stdio.h>

/**
* main - program starting point
* Description: print all combinations of three digit number
* Return: 0 indicates successfull execution
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48 + (i - 48) + 1; j < 58; j++)
		{
			for (k = 48 + (j - 48) + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
