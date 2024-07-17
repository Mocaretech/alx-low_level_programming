#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory containing
 *         the concatenated string. Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2);
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

    /* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

    /* Calculate the lengths of s1 and s2 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

    /* Allocate memory for the concatenated string */
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

    /* Copy s1 into the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

    /* Copy s2 into the concatenated string */
	for (j = 0; j < len2; j++)
		concat[len1 + j] = s2[j];

    /* Null-terminate the concatenated string */
	concat[len1 + len2] = '\0';

	return (concat);
}
