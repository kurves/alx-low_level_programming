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
