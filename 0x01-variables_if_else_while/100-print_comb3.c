#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int d, n;

	for (d = '0'; d < '9'; d++)
	{
		for (n = d + 1; n <= '9'; n++)
		{
			if (n != d)
			{
				putchar(d);
				putchar(n);

				if (d == '8' && n == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
