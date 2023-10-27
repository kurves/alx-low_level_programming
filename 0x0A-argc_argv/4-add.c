#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program that adds two positive integers
 * @argc: argument count
 * @argv: array of arguments
 * Description: A program to add two positive integers
 * Return: integer
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	if (argc == 1)
	{
		printf("0\n");
        	return (1);
        }
	for (i = 1; i < argc; i++)
       	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
                       	{
                        	printf("Error\n");
	                        return (1);
        	        }
        	}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
