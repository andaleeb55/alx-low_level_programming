#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isdigits - check if string is a digit characters only
 * @s: the reference to a character
 * Return: 1 if @s reference to cstring otherwise returns 0
 */
int isdigits(char *s)
{
	for (; *s; s++)
		if (!isdigit(*s))
			return (0);
	return (1);
}

/**
 * main - prints the sum of all arguments
 * @argc: the number or arguments
 * @argv: pointer of pointer of char
 *        represents the arguments list
 * Return: 0 (success_code)
 */
int main(int argc, char **argv)
{
	int a, i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = *(argv + i);

		if (!isdigits(arg))
		{
			puts("Error");
			exit(1);
		}

		a = atoi(arg);
		sum += a;
	}

	printf("%d\n", sum);
	return (0);
}
