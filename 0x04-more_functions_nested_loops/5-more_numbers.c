#include "main.h"
/**
 *more_numbers - print digits from 0 to 9 10 times
 */
void more_numbers(void)
{
	int n;
	int i = 10;

	while (i--)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
