#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * copy_file_contents - function to copy fike
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Description: function that copies content from to another
 * Return: integer value
 */
void copy_file(const char *file_from, const char *file_to) {
    int fd_from, fd_to, bytes_read, bytes_written;
    char buf[BUFFER_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        error_exit("Error: Can't read from file %filename",file_from 98);
    }
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        error_exit("Error: Can't write to file %filename",file_to 99);
    }
    while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0) 
    {
        bytes_written = write(fd_to, buf, bytes_read);
        if (bytes_written == -1)
            error_exit("Error: Can't write to file", 99);
    }
    if (bytes_read == -1)
    {
        error_exit("Error: Can't read from file", 98);
    }
    if (close(fd_from) == -1 || close(fd_to) == -1)
    {
	    error_exit("Error: Can't close file descriptor", 100);

    }
}
