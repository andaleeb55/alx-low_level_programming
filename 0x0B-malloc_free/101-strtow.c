#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in string
 * @str: the reference to the string
 * Description:
 * returns zero if @str is NULL
 *
 * Return: the number of words in @str
 */
int count_words(char *str)
{
	int i, inword = 0, count = 0;

	if (!str)
		return (0);
	for (i = 0; str[i]; i++)
		if (str[i] == 32)
			inword = 0;
		else if (!inword)
			inword = 1, count++;
	return (count);
}

/**
 * strtow - split words in @str into words list
 * @str: the reference to the string
 * Return: pointer to list of words otherwise NULL
 */
char **strtow(char *str)
{
	int count, i;
	char **words;

	/* count words */
	count = count_words(str);
	if (!count)
		return (NULL);
	/* remove begging white space */
	str = str + strspn(str, " ");
	/* allocate words list */
	words = calloc(count + 1, sizeof(char *));
	for (i = 0; i < count; i++)
	{
		/* count word characters */
		int len = strcspn(str, " ");
		/* allocate string with required length */
		words[i] = calloc(len + 1, sizeof(char));
		/* handle allocation error */
		if (!words[i])
			goto clean;
		/* copy string to the allocated memory */
		strncpy(words[i], str, len);
		/* move forward to the begin of the next word */
		str = str + len + strspn(str + len, " ");
	}
	return (words);
clean:
	for (; *words; words++)
		free(*words);
	return (NULL);
}
