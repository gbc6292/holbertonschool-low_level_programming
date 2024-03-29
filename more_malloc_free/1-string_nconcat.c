#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string to be concatenate
 * @s2: Second string to be concatenate
 * @n: The first n bytes of second string
 * Return: A pointer to the concatenates strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, idx;
	char *a;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	a = malloc(l1 + n + 1);
	if (a == NULL)
		return (NULL);

	for (idx = 0; idx < l1; idx++)
		a[idx] = s1[idx];
	if (n >= l2)
	{
		for (idx = 0; idx < l2; idx++)
		{
			a[l1++] = s2[idx];
		}
			a[l1] = '\0';
		return (a);
	}
	else
	{
		for (idx = 0; idx < n; idx++)
		{
			a[l1++] = s2[idx];
		}
			a[l1] = '\0';
	}
	return (a);
}
