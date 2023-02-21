#include "main.h"

/**
* _islower - check character
* Describtion: checks if an integer is a character
* Return: if character 1 else 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
