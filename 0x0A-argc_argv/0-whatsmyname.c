#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program to print the program name
 * @argc: argument count
 * @argv: array of arguments
 * Description: A program to print theprogram name
 * Return: integer
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
