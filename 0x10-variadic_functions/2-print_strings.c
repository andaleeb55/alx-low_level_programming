#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings with @separator followed by newline
 * @separator: string to separate arguments
 * @n: number of arguments to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		char *s = va_arg(ap, char *);

		printf("%s", s ? s : "(nil)");
		if (separator && i != n)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
