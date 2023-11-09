#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: variables
 * @n: number of variables
 * Description: function that prints strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list args;
	const char *str;
        va_start(args, n);

        for (i = 0; i < n; ++i)
        {
                str = va_arg(args, const char *);
                if (str == NULL) 
                {
                        printf("(nil)");
                }
                else 
                {
                        printf("%s", str);
                }
                if (separator != NULL && i < n - 1) 
                {
                        printf("%s", separator);
                }
        }
        va_end(args);
        printf("\n");
}
