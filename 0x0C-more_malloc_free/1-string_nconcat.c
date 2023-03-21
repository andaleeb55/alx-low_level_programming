#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concat @s1 and @n bytes of @s2
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to read from @s2
 * Description:
 * allocate new memory and concatenate @s1 and @n bytes of @s2
 * if @s1 or @s2 is null then it will be used as an empty string
 * if @n is greater than @s2 then the entire @s2 will be used
 * the allocated memory is null terminated
 *
 * Return: address of allocated memory with concatenated string
 *         otherwise NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2;

	/* calculate s1 and s2 length */
	len1 = !s1 ? 0 : strlen(s1);
	len2 = !s2 ? 0 : strlen(s2);
	/* calculate s2 needed length to copy */
	len2 = n > len2 ? len2 : n;

	/* allocate memory */
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	/* set terminating null character */
	str[len1 + len2] = 0;
	/* copy s1 if exists */
	if (s1)
		strcpy(str, s1);
	/* copy required length of s2 after s1 if s2 exists */
	if (s2)
		strncpy(str + len1, s2, len2);
	return (str);
}
