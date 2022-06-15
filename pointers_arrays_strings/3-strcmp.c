#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			diff = 0;
		i++;
	}
	return (diff);
}

/*
 * int _strcmp(char *s1, char *s2)
 * {
 *	while (*s1 && *s2 && *s1 == *s2)
 *	{
 *		s1++;
 *		s2++;
 *	}
 *
 *	return (*s1 - *s2);
 * }
 */
