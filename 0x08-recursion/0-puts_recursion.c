#include "main.h"

/**
 * _puts_recursion - write @s to stdout and add newline
 * @s: the reference to a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
