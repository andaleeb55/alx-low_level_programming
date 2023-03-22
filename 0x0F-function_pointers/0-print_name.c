/**
 * print_name - prints a name using util function @f
 * @name: the name characters to print
 * @f: the util function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
