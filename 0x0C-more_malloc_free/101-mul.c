#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program to print multiplication of two integers
 * @argc: argument count
 * @argv: array of arguments
 * Description: A program to print multiplication of two integers
 * Return: integer
 */
int main(int argc, char **argv)
{
	int i,  mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
