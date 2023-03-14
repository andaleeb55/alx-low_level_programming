#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two arguments
 * @argc: the number or arguments
 * @argv: pointer of pointer of char
 *        represents the arguments list
 * Return: 0 (success_code)
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
