#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; i++)
	{
		if ((n % 5) == 0 || (n % 3) == 0)
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
