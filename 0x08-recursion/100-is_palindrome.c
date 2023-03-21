#include <string.h>

/**
 * is_terminals_identical - check if @s == @e recursevelly
 * @s: reference to the start of a string
 * @e: reference to the end if a string
 * Return: returns 1 if terminals identical recursevelly
 *         otherwise returns 0
 */
int is_terminals_identical(char *s, char *e)
{
	return (s >= e ? 1 : *s != *e ? 0 : is_terminals_identical(++s, --e));
}

/**
 * is_palindrome - check is @s is a palindrome string or not
 * @s: the reference to a string to check
 * Return: 1 is @s is palindrome otherwise returns 0
 */
int is_palindrome(char *s)
{
	char *p;
	int len = strlen(s);

	if (!len)
		return (1);

	p = s + len - 1;
	return (is_terminals_identical(s, p));
}
