#include <stdio.h>

/**
* main - program starting point
* Description: print alphabet except 'e' and 'q'
* Return: 0 indicates successfull execution
*/
int main(void)
{
	char *alpha;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	while (*alpha != '\0')
	{
		if (*alpha != 'q' && *alpha != 'e')
		{
			putchar(*alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
