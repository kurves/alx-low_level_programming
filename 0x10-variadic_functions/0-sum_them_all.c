#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Fucntion that sums arguments
 * @n: variables
 * Description: function thatsums all the provided arguments
 * Return: integer value
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int res = 0;
	va_list args;

	va_start(args, num);
	if (n == 0)
	{
		return (0);
	}


	for (i = 0; i < num; ++i)
	{
		res += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
