#include <stdio.h>

/**
 * my_print_func - print string.
 * @text: accepts a string to be printed.
 * Description: This function prints a string.
 */
void my_print_func(char* text)
{
	while(*text != '\0'){
		putchar(*text);
		text++;
	}
	putchar('\n');
}

/**
* main - program starting point.
* Description: Calls my_print_func to print a string.
* Return: 0 indicates successful execution.
*/
int main(void)
{
	my_print_func("and that piece of art is userful\" - Dora Korpar, 2015-10-29");
	return (0);
}
