#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: the number or arguments
 * @argv: pointer of pointer of char
 *        represents the arguments list
 * Return: 0 (success_code)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	puts(argv[0]);
	return (0);
}
