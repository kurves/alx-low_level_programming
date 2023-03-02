#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  *
  * Return: char var
  */
char *string_toupper(char *l)
{
	int a = 0;

	while (l[a])
	{
		if (l[a] >= 97 && l[a] <= 122)
		{
			l[a] -= 32;
		}

		a++;
	}

	return (l);
}
