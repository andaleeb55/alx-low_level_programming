#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates char array in heap of @size, initialized with @c
 * @size: the size of the array
 * @c: the byte to initialize the array with
 * Return: pointer to the initialized array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (!size)
		return (NULL);
	str = malloc(size);
	if (str)
		memset(str, c, size);
	return (str);
}
