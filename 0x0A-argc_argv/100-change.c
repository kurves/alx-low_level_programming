#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program that returns minmal number of coins
 * @argc: argument count
 * @argv: array of arguments
 * Description: A program that returns minimal number of coins to return change
 * Return: integer
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2}, amount,  no_of_coins = 0, total = 0;
	unsigned long i;

	if (argc !=2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 1)
	{
		printf("0\n");
		return (0);
	}
	amount = atoi(argv[1]);

	while (amount > 1)
	{
		for (i = 0; i < sizeof(coins[i]); i++)
		{
			if (amount >= coins[i])
			{
				int cents = amount / coins[i];
				
				no_of_coins +=  cents;
				total = amount % coins[i];
				amount = total;
			}
		}
	}
	if (amount == 1)
	{
		no_of_coins++;
	}
	printf("%d\n", no_of_coins);
	return (0);
}
