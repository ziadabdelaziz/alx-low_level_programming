#include <stddef.h>
#include <stdio.h>

/**
 * before_main - print a string before main
 * Return: None
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
