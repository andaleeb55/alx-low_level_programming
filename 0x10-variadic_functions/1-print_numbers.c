#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print all arguments with @separator followed by newline
 * @separator: cstring to be used as separator between each argument
 * @n: number of arguments
 * Description:
 * print @n number arguments with @separator between each one.
 * ends the output with a newline
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
