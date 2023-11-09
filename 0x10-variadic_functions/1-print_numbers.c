#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: variables
 * @n: number of variables
 * Description: function that prints numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int num;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
