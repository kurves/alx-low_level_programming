#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_djb2 - function ot create a hashing program
 * @str: character input
 * Description: function to create hashing program
 * Return: int value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
