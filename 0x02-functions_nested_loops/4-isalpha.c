#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: the parameter that contains letters in lowercase and uppercase
 *
 * Return: 1 if the letter is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
