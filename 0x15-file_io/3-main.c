#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"


/**
 * main - main enrty point
 * @argc: number of arguments
 * @argv: array of arguments
 * description: main entry function
 * Return: integer
 */

int main(int ac, char **av)
{
	int res;
	
	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = copy_file_contents(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0)
}
