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
	int i, num, mul = 1;
	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
        	{
                	if (isdigit(i))
                	{
	        		num = atoi(argv[i]);    
				mul  *= num;
                                printf("%d\n", mul);
                	}
	                else
        	        {
                	       
                        	printf("Error\n");
                	}
		}
	}
	return (0);
}
