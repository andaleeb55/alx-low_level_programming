#include "main.h"
/**
 *print_line - print straight line
 *@n: number of lines
 */
void print_line(int n)
{
	int i = 1;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
