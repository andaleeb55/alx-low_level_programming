#include <stdio.h>
#include <stdlib.h>

/**
 * end - ends the program at any point with message and status code
 * @s: reference to a string to be used as a message
 * @status: the status code that returns after exit
 */
void end(char *s, int status)
{
	puts(s);
	exit(status);
}

/**
 * count_coins - counts the number of coins required for the @change
 * @change: the amount of coins needed to give back
 * Return: the number of coins require for the given @change
 */
int count_coins(int change)
{
	int i, coins = 0;
	int coin_type[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		int coin = coin_type[i];

		coins += change / coin;
		change %= coin;
		if (!change)
			return (coins);
	}

	return (coins);
}

/**
 * main - prints the number of coins needed to give change back
 * @argc: the number or arguments
 * @argv: pointer of pointer of char
 *        represents the arguments list
 * Return: 0 (success_code)
 */
int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
		end("Error", 1);

	a = atoi(argv[1]);
	if (a <= 0)
		end("0", 0);

	a = count_coins(a);
	printf("%d\n", a);
	return (0);
}
