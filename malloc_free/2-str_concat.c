#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenate two strings
 * @s1: First string to be concatenate
 * @s2: Second string to be concatenate
 * Return: Pointer with the concatenate string or NULL if is failure.
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int len1, len2, idx;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	con = malloc(len1 + len2 + 1);

	if (con == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len1; idx++)
	{
		con[idx] = s1[idx];
	}
	for (idx = 0; idx <= len2; idx++)
	{
		con[len1++] = s2[idx];
	}
	return (con);
}
