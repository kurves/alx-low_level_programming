#include  "main.h"
#include <stdio.h>
/**
 *  _sqrt_recursion - a function that returns the natural square root of a number
 * @n: integer
 * Description: A function that returns the square root  of a number recursively
 * Return: Integer value
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n ==1)
	{
		return ();
	}
	else if (y > 0)
	{
		return (x *  _sqrt_recursion(x, y - 1));
	}
	return (1 / _sqrt_recursion(-x, -y - 1));
}
