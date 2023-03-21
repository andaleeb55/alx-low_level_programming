/**
 * is_n_prime - recursively check if n%c, n%(c-1), ..., n%2 is not 0
 * @n: number to check
 * @c: the counter [n-1:2]
 * Description:
 * checks recursevly n%(c), n%(c-1), ..., n%2
 * if none equals zero then returns 1 else returns 0
 *
 * Return: 0 if @n is not prime number else 1
 */
int is_n_prime(int n, int c)
{
	if (c == n || c == 1)
		return (1);
	else if (n % c == 0)
		return (0);
	else
		return (is_n_prime(n, c - 1));
}

/**
 * is_prime_number - check if @n is prime number or not
 * @n: the number to check
 * Return: returns 1 if @n is prime else returns 0
 */
int is_prime_number(int n)
{
	return (n <= 1 ? 0 : is_n_prime(n, n - 1));
}
