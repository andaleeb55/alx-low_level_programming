/**
 * _pow_recursion - calculate @x to power of @y
 * @x: the number to calculate to power of @y
 * @y: the power
 * Return: @x to the power of @y, if @y < 0 returns -1
 */
int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 : !y ? 1 : x * _pow_recursion(x, --y));
}
