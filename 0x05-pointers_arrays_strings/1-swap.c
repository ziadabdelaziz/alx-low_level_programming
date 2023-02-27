#include "main.h"

/**
* swap_int - swap two numbers
* @a: first pointer to integer
* @b: second pointer to integer
* Return: 0 indicates successfull execution
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
