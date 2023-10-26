#include  "main.h"
#include <stdio.h>
/**
 * factorial - a function that prints the factorial of a number
 * @n: integer
 * Description: A function that prints the factorial of a number recursively
 * Return: Integer value
 */
int factorial(int n)
{

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
