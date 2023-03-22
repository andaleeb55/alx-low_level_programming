/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: pointer to the function that detects the integer
 *
 * Return: the index of the integer in the array
 * only if @cmp returns non-zero value otherwise returns -1.
 * if array or cmp is null then returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
