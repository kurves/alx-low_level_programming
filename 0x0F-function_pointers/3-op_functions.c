#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_sub - function that adds
 * @a: first int
 * @b: second int
 * Description: function that adds two integers
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- function that multiplies
 * @a: first int
 * @b: second int
 * Description: function that multiplies two integers
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - function that adds
 * @a: first int
 * @b: second int
 * Description: function that adds integers
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_div - function that divides
 * @a: first int
 * @b: second int
 * Description: function that divides two integers
 * Return: int
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - function that defines a modulus
 * @a: first int
 * @b: second int
 * Description: function that defines a modulus
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
