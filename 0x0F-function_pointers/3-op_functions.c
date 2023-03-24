#include "3-calc.h"

/**
* op_add - add two integers
* @a: array of integers
* @b: size of the array
* Return: result of operation
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtract two integers
* @a: array of integers
* @b: size of the array
* Return: result of operation
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two integers
* @a: array of integers
* @b: size of the array
* Return: result of operation
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division on two integers
* @a: array of integers
* @b: size of the array
* Return: result of operation
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - modulus of two integers
* @a: array of integers
* @b: size of the array
* Return: result of operation
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


