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
	int i, j, mul = 1;
	if (argc == 1)
	{
		  printf("0\n");
		  return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		mul += atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
