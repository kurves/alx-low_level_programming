#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: An array of command-line arguments
 * Description: functions to perform operations
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	int (*action)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	action = get_op_func(argv[2]);

	res = action(a, b);
	printf("%d\n", res);

	return 0;
}
