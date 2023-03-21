/**
 * factorial - calculate factorial of @n
 * @n: the number to calculate its factorial
 * Return: 1 if @n is zero, -1 if @n less than zero
 *         otherwise returns factorial of @n
 */
int factorial(int n)
{
	return (!n ? 1 : n < 0 ? -1 : n * factorial(n - 1));
}
