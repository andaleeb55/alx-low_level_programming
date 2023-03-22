#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Description:
 * only one argument required which is the number of bytes to be
 * printed
 *
 * Return: exit status 0 if success else 1 on usage error
 * or 2 on invalid argument
 */
int main(int argc, char **argv)
{
	int size, i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	size = atoi(argv[1]);
	if (size < 0)
	{
		puts("Error");
		return (2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < size - 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
