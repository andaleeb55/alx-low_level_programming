/**
 * test_root - starts with initial value for @y and modify until
 *             @y ^ 2 = @x
 * @x: the number to find its square root
 * @y: the guessed root for @x
 * Return: the square root of @x or a closer one
 */
float test_root(float x, float y)
{
	/* if y is the sqrt of x then return y */
	if (!(x / y - y))
	{
		return (y);
	}
	else
	{
		/* find the average and test it as a root for x */
		float av = (x / y + y) / 2;

		return (test_root(x, av));
	}
}

/**
 * _sqrt_recursion - find the natural sqrt of @n
 * @n: the number to find its sqrt
 * Return: the natural sqrt of @n else returns -1
 */
int _sqrt_recursion(int n)
{
	float t;

	/* return constant values */
	if (n < 1)
		return (n < 0 ? -1 : n);
	/* use 1 as initial y (y is the sqrt of n) */
	/* t should be the sqrt of x or closer */
	t = test_root(n, 1);
	/* if t has decimal point, then n has no natural sqrt (returns -1) */
	return (t == (int)t ? (int)t : -1);
}
