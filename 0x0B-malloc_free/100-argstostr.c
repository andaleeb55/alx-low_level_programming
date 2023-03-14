#include <string.h>
#include <stdlib.h>

/**
 * argstostr - write array of strings into one string
 * @ac: number of strings in the array
 * @av: the reference to the array
 * Return: pointer to the string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, ci, size;
	char *str;

	if (!ac)
		return (NULL);

	for (i = 0, size = 0; i < ac; i++)
		size += strlen(av[i]);

	str = calloc(1, size + ac + 1);
	if (!str)
		return (NULL);

	i = 0;
	ci = 0;
	size = 0;
	while (i < ac)
	{
		char c = av[i][ci++];

		if (!c)
		{
			str[size++] = '\n';
			ci = 0;
			i++;
			continue;
		}

		str[size++] = c;
	}
	str[size] = 0;

	return (str);
}
