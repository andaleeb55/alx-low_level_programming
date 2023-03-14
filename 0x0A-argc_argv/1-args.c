#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: the number or arguments
 * @argv: pointer of pointer of char
 *        represents the arguments list
 * Return: 0 (success_code)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
