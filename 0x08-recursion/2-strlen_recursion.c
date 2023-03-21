/**
 * _strlen_recursion - calculate length of @s
 * @s: the reference to a string
 * Return: length of characters starting from @s
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
