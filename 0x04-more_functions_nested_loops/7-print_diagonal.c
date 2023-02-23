#include "main.h"
/**
 *print_diagonal - print a diagonal line
 *@n: number of lines
 */
void print_diagonal(int n)
{
	int i = 0, j = 1;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
