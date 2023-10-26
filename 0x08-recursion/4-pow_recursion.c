#include  "main.h"
#include <stdio.h>
/**
 *  _pow_recursion - a function that prints the power of a number
 * @x: integer
 * @y: integer
 * Description: A function that prints the power of a number recursively
 * Return: Integer value
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	return (x *  _pow_recursion(x ** y));
}
