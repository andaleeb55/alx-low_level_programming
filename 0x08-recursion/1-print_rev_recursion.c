#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print @s reversed to stdout, adds newline
 * @s: the reference to a string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
