#incude "main.h"
/**
 *main - Print _putchar
 *Return: Always 0
*/
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	for (i = 0; i < 7; i++)
		_putchar (s[i]);
	return (0);
}
