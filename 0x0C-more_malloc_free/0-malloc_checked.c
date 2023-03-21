#include <stdlib.h>

/**
 * malloc_checked - allocate memory of size @b else exit
 * @b: the size of the memory to allocate
 * Description:
 * allocates memory of size @b and returns address points to the memory
 * otherwise exits with status code 98
 *
 * Return: the address of the allocated memory of success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
