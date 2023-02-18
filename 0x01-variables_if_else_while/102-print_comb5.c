#include <stdio.h>

/**
* main - program starting point
* Description: combination of two two digits numbers
* Return: 0 indicates successfull execution
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48 + (i - 48); k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if ((k - 48) * 10 + l > (i - 48) * 10 + j)
						continue;
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
