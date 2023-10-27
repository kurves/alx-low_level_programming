#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program to print the arguments passed
 * @argc: argument count
 * @argv: array of arguments
 * Description: A program to print the arguments passed
 * Return: integer
 */
int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	return (0);
}
