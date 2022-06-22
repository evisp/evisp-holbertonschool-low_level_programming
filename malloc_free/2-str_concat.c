#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[j++] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		result[j++] = s2[i];

	return (result);
}
