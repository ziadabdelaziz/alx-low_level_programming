#include <stdio.h>

/**
* main - program starting point
* Description: print alphabet lower and upper case
* Return: 0 indicates successfull execution
*/
int main(void)
{
	char *alpha;
	char *temp;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	temp = alpha;
	while (*temp != '\0')
	{
		putchar(*temp);
		temp++;
	}
	temp = alpha;
	while (*temp != '\0')
	{
		putchar(*temp - 32);
		temp++;
	}
	putchar('\n');

	return (0);
}
