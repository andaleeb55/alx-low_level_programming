

#include "main.h"

/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: pointer to memory area
 *@src: pointer to memory area
 *@n: number of bytes
 *Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = -1;

	while (++i < n)
		dest[i] = src[i];

	return (dest);
}
