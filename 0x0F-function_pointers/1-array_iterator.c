#include <stddef.h>

/**
 * array_iterator - for each element of array executes a function
 * @array: the array of integers
 * @size: the size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
