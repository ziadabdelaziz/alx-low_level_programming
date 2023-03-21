#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) abs(x)

/**
* abs - get absolute value
* @x: integer
* Return: absolute value of x
*/
int abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

#endif
