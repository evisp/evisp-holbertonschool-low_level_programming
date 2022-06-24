#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	int j;
	char *con;

	len = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	con = malloc((len + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s1[i] != '\0'; i++, j++)
		con[j] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++, j++)
		con[j] = s2[i];
	con[j] = '\0';
	return (con);
}
