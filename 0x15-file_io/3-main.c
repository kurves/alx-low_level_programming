#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"


/**
 * main- main enrty point
 * @argc: number of arguments
 * @argv: array of arguments
 * description: main entry function
 * Return: integer
 */

int main(int argc, char *argv[])
{
        if (argc != 3)
        {
                error_exit("Usage: cp file_from file_to", 97);
        }
        const char *file_from = argv[1];
        const char *file_to = argv[2];

        copy_file(file_from, file_to);
        return (0);
}
