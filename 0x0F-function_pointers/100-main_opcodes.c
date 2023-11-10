#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Function to print opcodes
 * @num_bytes: variables
 * Description: function prints opcodes
 * Return: nothing
 */
void print_opcodes(int num_bytes)
{
	char *start = (char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02hhx", start[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of aruments
 * Description: function that prints opcodes
 * Return: integer value
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
