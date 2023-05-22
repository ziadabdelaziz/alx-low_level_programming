#include "main.h"

/**
* _isalpha - check if alphabet
* @c: character
* Describtion: check if the inputer integer is alphabet
* Return: if alphabet 1 else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
