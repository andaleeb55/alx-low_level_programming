#include "main.h"

/**
 *_memset -  function fills the first n bytes of
 *the memory area pointed to by s with the constant byte b
 *@s: pointer to string
 *@b: costant byte
 *@n: number of bytes
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}
